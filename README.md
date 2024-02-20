# Vibration Module 

## Description
This Arduino code allows you to control vibration modules connected to your Arduino board using serial communication. You can adjust the intensity of vibrations using your computer keyboard.

Ce code Arduino vous permet de contrôler des modules de vibration connectés à votre carte Arduino en utilisant la communication série. Vous pouvez ajuster l'intensité des vibrations en utilisant le clavier de votre ordinateur.

## How to Use
1. Connect your Arduino board to your computer.
2. Upload the provided Arduino sketch (`vibration_control.ino`) to your Arduino board.
3. Run the Python script (`keyboard_control.py`) on your computer.
4. Press the 'A' key to increase the intensity of vibration modules 1 and 3.
5. Press the 'P' key to increase the intensity of vibration modules 2 and 4.
6. Release the keys to decrease the intensity of vibrations.

## Requirements
- Arduino board
- Vibration modules (connected to digital pins according to the code)
- Computer with Python installed

## Installation
1. Clone this repository to your local machine.
2. Upload the Arduino sketch (`vibration_control.ino`) to your Arduino board.
3. Install the required Python libraries by running `pip install -r requirements.txt`.

## Configuration
- Modify the Arduino sketch if you want to change the pin assignments.
- Adjust the Python script if you want to use different keys or change the serial port.

## Donation
If you find this project helpful, consider supporting its development by making a donation [here](https://www.example.com/donate).

## License
This project is licensed under the Apache License 2.0. See the [LICENSE](LICENSE) file for details.

## Author
- [Bermudax](https://github.com/BerMud4X)
