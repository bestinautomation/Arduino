#include <DFRobot_DHT11.h>
#include <LiquidCrystal.h>
#define DHT11_PIN A3
#define BUZZER_PIN 4  // Adjust the pin number based on your buzzer configuration

const int rs = 5, en = 3, d4 = 2, d5 = 16, d6 = 15, d7 = 14;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);  // Adjust the pin numbers based on your LCD configuration


DFRobot_DHT11 DHT;
void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp:");

  lcd.setCursor(0, 1);
  lcd.print("Humi:");

  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  
  DHT.read(DHT11_PIN);
  float temperature = DHT.temperature;
  float humidity = DHT.humidity;

  
  lcd.setCursor(6, 0);
  lcd.print(temperature);
  lcd.setCursor(6, 1);
  lcd.print(humidity);

  // Check if the temperature is greater than 20 degrees Celsius
  if (temperature > 20.0) {
    // Turn on the buzzer
    digitalWrite(BUZZER_PIN, HIGH);
  } else {
    // Turn off the buzzer
    digitalWrite(BUZZER_PIN, LOW);
  }

  delay(200);
}
