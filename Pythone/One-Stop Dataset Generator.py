import requests
import pandas as pd
import numpy as np
from datetime import datetime

# --- Configuration ---
LAT, LON = 38.4192, 27.1287  # Izmir, Turkey
START_DATE, END_DATE = "2022-01-01", "2025-01-01"
URL = "https://archive-api.open-meteo.com/v1/archive"
PARAMS = {
    "latitude": LAT,
    "longitude": LON,
    "start_date": START_DATE,
    "end_date": END_DATE,
    "hourly": "temperature_2m,wind_speed_10m,wind_direction_10m",
    "timezone": "Europe/Istanbul"
}

# --- Step 1: Download Weather Data ---
print("⏳ Fetching weather data from Open-Meteo...")
res = requests.get(URL, params=PARAMS)
res.raise_for_status()
data = res.json()
df = pd.DataFrame(data["hourly"])
df["time"] = pd.to_datetime(df["time"])
df = df.rename(columns={
    "time": "Timestamp",
    "wind_speed_10m": "Wind_Speed_ms",
    "wind_direction_10m": "Wind_Direction_deg",
    "temperature_2m": "Turbine_Temperature_C"
})
df.set_index("Timestamp", inplace=True)

# --- Step 2: Resample to 10-Minute Intervals ---
print("📐 Resampling to 10-minute intervals...")
df = df.resample("10T").interpolate(method="linear").reset_index()

# --- Step 3: Simulate Power Output Based on Wind Speed ---
print("🔋 Simulating power output...")
def simulate_power_output(ws):
    if ws < 3: return 0
    elif ws < 12: return (ws - 3) / 9 * 2000
    elif ws <= 25: return 2000
    else: return 0

np.random.seed(42)
df["Power_Output_kW"] = df["Wind_Speed_ms"].apply(simulate_power_output)
df["Power_Output_kW"] += np.random.normal(0, 50, len(df))
df["Power_Output_kW"] = df["Power_Output_kW"].clip(lower=0, upper=2000)

# --- Step 4: Add Simulated Attributes ---
print("⚙️ Adding turbine-related attributes...")
df["Turbine_RPM"] = np.round(np.random.normal(15, 2, len(df)), 2) * df["Wind_Speed_ms"]
df["Battery_Charge_Level_pct"] = np.round(np.random.uniform(50, 100, len(df)), 2)
df["Maintenance_Status"] = np.random.choice(["Normal", "Scheduled", "Urgent"], len(df), p=[0.85, 0.10, 0.05])
df["Total_Demand_kW"] = np.round(np.random.uniform(4000, 7000, len(df)), 2)
df["Critical_Load_kW"] = np.round(df["Total_Demand_kW"] * np.random.uniform(0.4, 0.7, len(df)), 2)
df["Non_Critical_Load_kW"] = df["Total_Demand_kW"] - df["Critical_Load_kW"]
df["Grid_Power_Supplied_kW"] = np.round(np.random.uniform(3000, 5500, len(df)), 2)
df["Load_Shedding_Event"] = (df["Total_Demand_kW"] > (df["Power_Output_kW"] + df["Grid_Power_Supplied_kW"])).astype(int)
df["Blade_Pitch_Angle_deg"] = np.round(np.where(
    (df["Wind_Speed_ms"] >= 8) & (df["Wind_Speed_ms"] <= 9),
    np.random.uniform(3, 5, len(df)),
    np.random.uniform(1, 10, len(df))
), 2)
df["Turbine_Status"] = np.where(df["Power_Output_kW"] > 0, "On", "Off")
df["Grid_Frequency_Hz"] = np.round(np.where(
    df["Load_Shedding_Event"] == 1,
    np.random.uniform(49.5, 49.9, len(df)),
    np.random.uniform(49.9, 50.5, len(df))
), 2)
df["Turbine_ID"] = np.random.choice(["T01", "T02", "T03", "T04", "T05"], len(df))
df["Turbulence_Intensity"] = np.round(np.clip(np.random.normal(15, 2, len(df)), 10, 20), 2)

# --- Step 5: Finalize and Export ---
final_columns = [
    "Timestamp", "Wind_Speed_ms", "Wind_Direction_deg", "Power_Output_kW", "Turbine_RPM",
    "Turbine_Temperature_C", "Battery_Charge_Level_pct", "Total_Demand_kW",
    "Critical_Load_kW", "Non_Critical_Load_kW", "Grid_Power_Supplied_kW",
    "Load_Shedding_Event", "Maintenance_Status", "Blade_Pitch_Angle_deg",
    "Turbine_Status", "Grid_Frequency_Hz", "Turbine_ID", "Turbulence_Intensity"
]
df = df[final_columns]

print(f"✅ Total Records: {len(df)}")
df.to_csv("refined_wind_dataset_2022_2025.csv", index=False)
print("📁 Saved as 'refined_wind_dataset_2022_2025.csv'")
