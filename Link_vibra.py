import serial
import keyboard
import time

# Configure the serial port
ser = serial.Serial('COMX', 9600)  # Replace 'COMX' with your Arduino's serial port

while True:
    if keyboard.is_pressed('a') and keyboard.is_pressed('p'):
        ser.write(b'AP')  # Send 'AP' to Arduino
    elif keyboard.is_pressed('a'):
        ser.write(b'A')  # Send 'A' to Arduino
    elif keyboard.is_pressed('p'):
        ser.write(b'P')  # Send 'P' to Arduino
    time.sleep(0.5)
