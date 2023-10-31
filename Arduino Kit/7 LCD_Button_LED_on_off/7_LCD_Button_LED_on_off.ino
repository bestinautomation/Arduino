#include <LiquidCrystal.h>

// Define the pin numbers for LEDs and buttons
const int ledPins[] = { 10, 6, 9, 11 };     // Pins for LEDs
const int buttonPins[] = { 7, 8, 12, 13 };  // Pins for buttons

// Define an array to store the current state of LEDs
bool ledStates[] = { LOW, LOW, LOW, LOW };

// Initialize the LCD with the pins it's connected to
const int rs = 5, en = 3, d4 = 2, d5 = 16, d6 = 15, d7 = 14;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

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

  // Initialize the LCD
  lcd.begin(16, 2);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("   LED Status");

  // Display initial LED status on the LCD
  updateLCD();
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

      // Update the LCD display
      updateLCD();
    }
  }
}

void updateLCD() {
  lcd.setCursor(0, 2);
  for (int i = 0; i < 4; i++) {
    lcd.print(ledStates[i] ? "ON " : "OFF ");
  }
}
