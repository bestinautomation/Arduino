/*
 * for LCD interfacing use myLCD.h file
 */
#include "myLCD.h"

int alcoholSensorPin = A3;

void setup() {
  // Initialize the LCD
  lcd.begin(16, 2);
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("     BESTIN");

  lcd.setCursor(0, 1);
  lcd.print("   AUTOMATION");

  delay(5000);
  lcd.clear();

  // Initialize the serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the analog value from the alcohol sensor
  int sensorValue = analogRead(alcoholSensorPin);

  // Convert the sensor reading to a percentage
  float percentage = map(sensorValue, 0, 1023, 0, 100);

  // Display the percentage on the LCD
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Alcohol Sensor");
  lcd.setCursor(0, 1);
  lcd.print("Reading: " + String(percentage, 2) + "%");

  // Print the percentage to the Serial Monitor for debugging
  Serial.print("Alcohol Percentage: ");
  Serial.print(percentage);
  Serial.println("%");

  delay(1000);  // Update the display every 1 second
}
