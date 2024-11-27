import os
import pandas as pd
import matplotlib.pyplot as plt
import serial
from datetime import datetime

# Constants
DATA_DIR = "gps_data"
os.makedirs(DATA_DIR, exist_ok=True)

def read_serial_data(serial_port, baud_rate=9600):
    """
    Reads data from Arduino and saves to a CSV file, including satellite count.
    """
    ser = serial.Serial(serial_port, baudrate=baud_rate, timeout=1)
    timestamp = datetime.now().strftime('%Y%m%d_%H%M%S')
    csv_folder = os.path.join(DATA_DIR, f"gps_data_{timestamp}")
    os.makedirs(csv_folder, exist_ok=True)
    output_file = os.path.join(csv_folder, "data.csv")
    columns = ["Raw Latitude", "Raw Longitude", "Raw Altitude",
               "Avg Latitude", "Avg Longitude", "Avg Altitude", "Satellite Count"]

    with open(output_file, "w") as f:
        f.write(",".join(columns) + "\n")  # Header
        print(f"Reading data from {serial_port}...")

        try:
            while True:
                line = ser.readline().decode('utf-8').strip()
                if line:
                    print(line)
                    values = line.split(",")
                    if len(values) == len(columns):
                        try:
                            values = [float(v) for v in values]
                            f.write(",".join(map(str, values)) + "\n")
                        except ValueError:
                            print(f"Skipping invalid data: {line}")
                    else:
                        print(f"Unexpected format: {line}")
        except KeyboardInterrupt:
            print("\nStopped by user.")
        finally:
            ser.close()

    print(f"Data saved to {output_file}")
    return csv_folder, output_file

def plot_satellite_count(data, save_dir):
    """
    Plots satellite count over time.
    """
    satellite_data = data["Satellite Count"]

    plt.figure(figsize=(12, 6))
    plt.plot(satellite_data, label="Satellite Count", marker='o', linestyle='-', alpha=0.7)
    plt.xlabel("Index")
    plt.ylabel("Satellite Count")
    plt.title("Satellite Count Over Time")
    plt.legend()
    plt.grid()
    satellite_path = os.path.join(save_dir, "satellite_count.png")
    plt.savefig(satellite_path)
    print(f"Saved: {satellite_path}")
    plt.close()

def plot_data(data, parameter_name, save_dir):
    """
    Plots raw vs rolling average and their difference, including satellite count.
    """
    raw_data = data[f"Raw {parameter_name}"]
    avg_data = data[f"Avg {parameter_name}"]

    plt.figure(figsize=(12, 6))
    plt.plot(raw_data, label=f"Raw {parameter_name}", marker='o', linestyle='-', alpha=0.7)
    plt.plot(avg_data, label=f"Rolling Avg {parameter_name}", marker='x', linestyle='--', alpha=0.7)
    plt.xlabel("Index")
    plt.ylabel(parameter_name)
    plt.title(f"Comparison of Raw and Rolling Avg for {parameter_name}")
    plt.legend()
    plt.grid()
    comparison_path = os.path.join(save_dir, f"{parameter_name.lower()}_comparison.png")
    plt.savefig(comparison_path)
    print(f"Saved: {comparison_path}")
    plt.close()

    # Difference Plot
    difference = raw_data - avg_data
    plt.figure(figsize=(12, 6))
    plt.plot(difference, label=f"Difference in {parameter_name}", marker='x', linestyle='-', alpha=0.7)
    plt.axhline(0, color='r', linestyle='--', label="Zero Difference")
    plt.xlabel("Index")
    plt.ylabel(f"Difference in {parameter_name}")
    plt.title(f"Difference Between Raw and Rolling Avg for {parameter_name}")
    plt.legend()
    plt.grid()
    difference_path = os.path.join(save_dir, f"{parameter_name.lower()}_difference.png")
    plt.savefig(difference_path)
    print(f"Saved: {difference_path}")
    plt.close()

def generate_plots(csv_folder, csv_file):
    """
    Generates all plots for the data in the CSV file.
    """
    data = pd.read_csv(csv_file)
    save_dir = os.path.join(csv_folder, "plots")
    os.makedirs(save_dir, exist_ok=True)

    print("Generating plots...")
    plot_data(data, "Latitude", save_dir)
    plot_data(data, "Longitude", save_dir)
    plot_data(data, "Altitude", save_dir)
    plot_satellite_count(data, save_dir)

def main(serial_port="COM6"):
    """
    Main function to read data, save to CSV, and generate plots.
    """
    csv_folder, csv_file = read_serial_data(serial_port)
    generate_plots(csv_folder, csv_file)

if __name__ == "__main__":
    main(serial_port="COM6")

