#define Vibration1 2    // Define pin numbers for vibration modules
#define Vibration2 3
#define Vibration3 4
#define Vibration4 5

int vibration1Intensity = 0;  // Initialize intensity of vibration1
int vibration2Intensity = 0;  // Initialize intensity of vibration2
int vibration3Intensity = 0;  // Initialize intensity of vibration3
int vibration4Intensity = 0;  // Initialize intensity of vibration4

void setup() {
  pinMode(Vibration1, OUTPUT);  // Set the defined pins as OUTPUT
  pinMode(Vibration2, OUTPUT);
  pinMode(Vibration3, OUTPUT);
  pinMode(Vibration4, OUTPUT);
  Serial.begin(9600);           // Initialize serial communication with baud rate 9600
}

void loop() {
  // Check if data is available on serial port
  if (Serial.available() > 0) {
    char receivedChar = Serial.read();  // Read the received character
    
    // Check if the received character is 'A' or 'P'
    switch (receivedChar) {
      case 'A':
        // Increase vibration1 and vibration3 intensity gradually
        if (vibration1Intensity < 255) {
          vibration1Intensity++;  // Increase intensity
        }
        if (vibration3Intensity < 255) {
          vibration3Intensity++;  // Increase intensity
        }
        break;
      case 'P':
        // Increase vibration2 and vibration4 intensity gradually
        if (vibration2Intensity < 255) {
          vibration2Intensity++;  // Increase intensity
        }
        if (vibration4Intensity < 255) {
          vibration4Intensity++;  // Increase intensity
        }
        break;
      case 'AP':
        // Increase intensity of all vibrations simultaneously
        if (vibration1Intensity < 255) {
          vibration1Intensity++;  // Increase intensity
        }
        if (vibration2Intensity < 255) {
          vibration2Intensity++;  // Increase intensity
        }
        if (vibration3Intensity < 255) {
          vibration3Intensity++;  // Increase intensity
        }
        if (vibration4Intensity < 255) {
          vibration4Intensity++;  // Increase intensity
        }
        break;
    }
  } else {
    // Decrease intensity gradually for all vibrations
    if (vibration1Intensity > 0) {
      vibration1Intensity--;  // Decrease intensity
    }
    if (vibration2Intensity > 0) {
      vibration2Intensity--;  // Decrease intensity
    }
    if (vibration3Intensity > 0) {
      vibration3Intensity--;  // Decrease intensity
    }
    if (vibration4Intensity > 0) {
      vibration4Intensity--;  // Decrease intensity
    }
  }
  
  // Update PWM for all vibrations
  analogWrite(Vibration1, vibration1Intensity);
  analogWrite(Vibration2, vibration2Intensity);
  analogWrite(Vibration3, vibration3Intensity);
  analogWrite(Vibration4, vibration4Intensity);
  
  // Wait for 0.5 seconds
  delay(500);
}

