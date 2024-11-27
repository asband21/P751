
import serial
import time
import socket
import struct

# Serial port setup for Arduino
arduino_port = 'COM6'  # Replace with your Arduino's COM port
baud_rate = 9600       # Match the baud rate used in the Arduino code
timeout = 1            # Timeout for serial communication

# UDP setup for Simulink
udp_ip = "127.0.0.1"  # Localhost for Simulink UDP Receive block
udp_port = 5005       # Port to match Simulink configuration
sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

try:
    # Initialize the serial connection
    ser = serial.Serial(arduino_port, baud_rate, timeout=timeout)
    print(f"Connected to {arduino_port} at {baud_rate} baud.")
except Exception as e:
    print(f"Error connecting to {arduino_port}: {e}")
    exit()

# Main loop for reading and sending data
try:
    while True:
        # Check for incoming data from Arduino
        if ser.in_waiting > 0:
            data_line = ser.readline().decode('utf-8').strip()
            
            # Parse the data
            values = data_line.split(',')
            if len(values) == 3:  # Ensure valid GPS data
                try:
                    latitude = float(values[0])
                    longitude = float(values[1])
                    altitude = float(values[2])

                    # Print formatted GPS data to console
                    print(f"Latitude: {latitude:.6f}, Longitude: {longitude:.6f}, Altitude: {altitude:.2f}")

                    # Prepare UDP message
                    udp_message = struct.pack('ddd',latitude,longitude,altitude)

                    # Send data to Simulink via UDP
                    sock.sendto(udp_message, (udp_ip, udp_port))
                except ValueError as ve:
                    print(f"Invalid data format: {data_line}")
            else:
                print(f"Unexpected data format: {data_line}")

        # Optional delay for 1Hz data collection (match Arduino update rate)
        time.sleep(1)

except KeyboardInterrupt:
    print("\nTerminating the program.")
except Exception as e:
    print(f"Error: {e}")
finally:
    # Close serial and UDP sockets on exit
    ser.close()
    sock.close()
    print("Connections closed.")

