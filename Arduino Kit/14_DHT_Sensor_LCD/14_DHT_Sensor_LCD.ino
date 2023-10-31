#include <DFRobot_DHT11.h>
#include "myLCD.h"

DFRobot_DHT11 DHT;
#define DHT11_PIN 17

// Initialize the LCD with the pins you're using

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);  // Initialize the LCD with 16 columns and 2 rows
  lcd.clear();       // Clear the LCD screen
  lcd.setCursor(0, 0);
  lcd.print("Temp:");

  lcd.setCursor(0, 1);
  lcd.print("Humi:");
}

void loop() {
  DHT.read(DHT11_PIN);
  float temperature = DHT.temperature;
  float humidity = DHT.humidity;

  // Display sensor data on the LCD
  lcd.setCursor(6, 0);  // Set the cursor to the 7th column of the 1st row
  lcd.print(temperature);
  lcd.setCursor(6, 1);  // Set the cursor to the 8th column of the 2nd row
  lcd.print(humidity);

  delay(200);
}
