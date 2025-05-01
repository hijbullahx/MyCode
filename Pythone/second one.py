import pandas as pd
import numpy as np
import requests
import os
from difflib import get_close_matches

# --- Load Datasets ---
primary_file = "wind_dataset_2022_2025.csv"
secondary_file = "(Data Sheet)Machine Learning-Based Prediction of Load Shedding and Power Distribution Optimization for Wind Turbine Systems (1).xlsx"

if not os.path.exists(primary_file):
    raise FileNotFoundError(f"❌ File not found: {primary_file}")
if not os.path.exists(secondary_file):
    raise FileNotFoundError(f"❌ File not found: {secondary_file}")

primary_df = pd.read_csv(primary_file)
secondary_df = pd.read_excel(secondary_file)  # Add sheet_name= if needed

# --- Step 1: Clean & Map Column Names ---
def auto_map_columns(primary_cols, secondary_cols, cutoff=0.6):
    mapping = {}
    for sec_col in secondary_cols:
        match = get_close_matches(sec_col, primary_cols, n=1, cutoff=cutoff)
        if match:
            mapping[sec_col] = match[0]
    return mapping

primary_df.columns = primary_df.columns.str.strip()
secondary_df.columns = secondary_df.columns.str.strip()

column_mapping = auto_map_columns(primary_df.columns.tolist(), secondary_df.columns.tolist())
secondary_df.rename(columns=column_mapping, inplace=True)

# --- Step 2: Standardize Timestamp Columns ---
def find_timestamp_column(df):
    for col in df.columns:
        if "time" in col.lower() or "date" in col.lower():
            return col
    return None

primary_time_col = find_timestamp_column(primary_df)
secondary_time_col = find_timestamp_column(secondary_df)

if primary_time_col and secondary_time_col:
    primary_df[primary_time_col] = pd.to_datetime(primary_df[primary_time_col], errors='coerce')
    secondary_df[secondary_time_col] = pd.to_datetime(secondary_df[secondary_time_col], errors='coerce')
else:
    raise ValueError("❌ Timestamp column not found in one or both datasets.")

# Rename secondary timestamp column to match for merging
if primary_time_col != secondary_time_col:
    secondary_df.rename(columns={secondary_time_col: primary_time_col}, inplace=True)

# --- Step 3: Add Missing Columns ---
for col in primary_df.columns:
    if col not in secondary_df.columns:
        secondary_df[col] = np.nan

# --- Step 4: Merge on Timestamp ---
merged_df = pd.merge(primary_df, secondary_df, on=primary_time_col, how="left")

# --- Step 5: Fetch Missing Wind Speed from Open-Meteo ---
def fetch_missing_data(timestamp):
    url = "https://archive-api.open-meteo.com/v1/archive"
    params = {
        "latitude": 38.4192,
        "longitude": 27.1287,
        "start_date": timestamp.date().isoformat(),
        "end_date": timestamp.date().isoformat(),
        "hourly": "temperature_2m,wind_speed_10m,wind_direction_10m",
        "timezone": "Europe/Istanbul"
    }
    try:
        response = requests.get(url, params=params)
        response.raise_for_status()
        return response.json().get("hourly", {})
    except Exception as e:
        print(f"⚠️ Error fetching data for {timestamp}: {e}")
        return {}

if "Wind_Speed_ms" in merged_df.columns:
    for idx, row in merged_df.iterrows():
        if pd.isna(row["Wind_Speed_ms"]) and pd.notna(row[primary_time_col]):
            data = fetch_missing_data(row[primary_time_col])
            if data.get("time") and data.get("wind_speed_10m"):
                try:
                    hour = row[primary_time_col].hour
                    merged_df.at[idx, "Wind_Speed_ms"] = data["wind_speed_10m"][hour]
                except IndexError:
                    pass

# --- Step 6: Save Final Merged Dataset ---
merged_df.to_csv("merged_wind_dataset.csv", index=False)
print("✅ Merged dataset saved as 'merged_wind_dataset.csv'")
