import pandas as pd
import numpy as np

# --- Generate Timestamps ---
timestamps = pd.date_range(start="2022-01-01", end="2025-01-01", freq="10min")
timestamps = timestamps[:50000]  # Limit to 50,000 records for now

# --- Simulate Wind Speed with Weibull Distribution (shape=2, scale=8) ---
shape, scale = 2, 8
wind_speeds = np.random.weibull(shape, len(timestamps)) * scale
wind_speeds = np.clip(wind_speeds, 0, 25)  # Cap at 25 m/s

# --- Simulate Wind Direction ---
wind_direction = np.random.uniform(0, 360, len(timestamps))

# --- Simulate Power Output (simple linear model up to 12 m/s, flat up to 25 m/s, 2 MW turbine) ---
def simulate_power(ws):
    if ws < 3:
        return 0
    elif ws < 12:
        return (ws - 3) / 9 * 2000  # Scale linearly from 0 to 2 MW
    elif ws <= 25:
        return 2000  # Rated power
    else:
        return 0

power_output = np.array([simulate_power(ws) for ws in wind_speeds])

# --- Add Random Noise to Power Output ---
power_output += np.random.normal(0, 50, len(power_output))  # ±50 kW noise
power_output = np.clip(power_output, 0, 2000)

# --- Additional Attribute Simulation ---
turbine_rpm = wind_speeds * np.random.normal(15, 2, len(timestamps))
battery_charge = np.random.uniform(50, 100, len(timestamps))
turbine_temp = np.random.normal(25, 5, len(timestamps))
maintenance_status = np.random.choice(["Normal", "Scheduled", "Urgent"], len(timestamps), p=[0.9, 0.08, 0.02])
total_demand = np.random.uniform(4000, 7000, len(timestamps))
critical_load = total_demand * np.random.uniform(0.4, 0.7, len(timestamps))
non_critical_load = total_demand - critical_load
grid_power = np.random.uniform(3000, 5500, len(timestamps))
load_shedding = (total_demand > (power_output + grid_power)).astype(int)
pitch_angle = np.where((wind_speeds >= 8) & (wind_speeds <= 9),
                       np.random.uniform(3, 5, len(timestamps)),
                       np.random.uniform(1, 10, len(timestamps)))
turbine_status = np.where(power_output > 0, "On", "Off")
grid_freq = np.where(load_shedding == 1,
                     np.random.uniform(49.5, 49.9, len(timestamps)),
                     np.random.uniform(49.9, 50.5, len(timestamps)))
turbine_id = np.random.choice(["T01", "T02", "T03", "T04", "T05"], len(timestamps))
turbulence = np.clip(np.random.normal(15, 3, len(timestamps)), 10, 20)

# --- Construct Final DataFrame ---
df = pd.DataFrame({
    "Timestamp": timestamps.strftime('%Y-%m-%dT%H:%M:%SZ'),
    "Wind_Speed_ms": np.round(wind_speeds, 2),
    "Wind_Direction_deg": np.round(wind_direction, 2),
    "Power_Output_kW": np.round(power_output, 2),
    "Turbine_RPM": np.round(turbine_rpm, 2),
    "Turbine_Temperature_C": np.round(turbine_temp, 2),
    "Battery_Charge_Level_pct": np.round(battery_charge, 2),
    "Total_Demand_kW": np.round(total_demand, 2),
    "Critical_Load_kW": np.round(critical_load, 2),
    "Non_Critical_Load_kW": np.round(non_critical_load, 2),
    "Grid_Power_Supplied_kW": np.round(grid_power, 2),
    "Load_Shedding_Event": load_shedding,
    "Maintenance_Status": maintenance_status,
    "Blade_Pitch_Angle_deg": np.round(pitch_angle, 2),
    "Turbine_Status": turbine_status,
    "Grid_Frequency_Hz": np.round(grid_freq, 2),
    "Turbine_ID": turbine_id,
    "Turbulence_Intensity": np.round(turbulence, 2)
})

# --- Export CSV ---
df.to_csv("wind_turbine_izmir_50000.csv", index=False)
print("✅ Dataset 'wind_turbine_izmir_50000.csv' generated with 50,000 records.")
