#include<LiquidCrystal.h>
#define trigPin 13
#define echoPin 12
#define buzzerPin 4  // Assuming the buzzer is connected to digital pin D4

const int rs = 5, en = 3, d4 = 2, d5 = 16, d6 = 15, d7 = 14;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

long duration;
int distance_cm, distance_inch;

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("BestinAutomation");
  lcd.setCursor(0, 1);
  lcd.print("UltrasonicSensor");
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);  // Set the buzzer pin as OUTPUT
  delay(4000);
}

void loop() {
  lcd.clear();
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance_cm = duration * 0.034 / 2;
  distance_inch = duration * 0.0133 / 2;

  lcd.setCursor(0, 0);
  lcd.print("Distance: ");
  lcd.print(distance_cm);
  lcd.print(" cm");
  delay(20);
  lcd.setCursor(0, 1);
  lcd.print("Distance: ");
  lcd.print(distance_inch);
  lcd.print(" inch");

  // Check if the distance is less than 5 inches
  if (distance_inch < 5) {
    digitalWrite(buzzerPin, HIGH);  // Turn on the buzzer
  } else {
    digitalWrite(buzzerPin, LOW);   // Turn off the buzzer
  }

  delay(500);
}
