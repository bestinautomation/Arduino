// Define the pin numbers for LEDs and buttons
const int ledPins[] = { 10, 6, 9, 11 };     // Pins for LEDs
const int buttonPins[] = { 7, 8, 12, 13 };  // Pins for buttons

// Define an array to store the current state of LEDs
bool ledStates[] = { LOW, LOW, LOW, LOW };

void setup() {
  // Initialize the LED pins as OUTPUT
  for (int i = 0; i < 4; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], ledStates[i]);  // Set initial LED state
  }

  // Initialize the button pins as INPUT_PULLUP
  for (int i = 0; i < 4; i++) {
    pinMode(buttonPins[i], INPUT);
  }
}

void loop() {
  // Read the state of each button
  for (int i = 0; i < 4; i++) {
    if (digitalRead(buttonPins[i]) == HIGH) {
      // Button is pressed
      // Toggle the state of the corresponding LED
      ledStates[i] = !ledStates[i];
      digitalWrite(ledPins[i], ledStates[i]);
      delay(200);  // Debounce delay
    }
  }
}
