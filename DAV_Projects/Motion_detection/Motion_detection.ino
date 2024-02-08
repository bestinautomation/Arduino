const int pirPin = A3;  // PIR sensor connected to analog pin A3
const int buzzerPin = 4;  // Buzzer connected to digital pin D4

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int pirValue = digitalRead(pirPin);  // Read PIR sensor value

  if (pirValue == HIGH) {
    // Motion detected, turn on buzzer
    digitalWrite(buzzerPin, HIGH);
    Serial.println("Motion Detected!");
    delay(1000);  // Buzzer on for 1 second (you can adjust this duration)
    digitalWrite(buzzerPin, LOW);
  } else {
    // No motion, turn off buzzer
    digitalWrite(buzzerPin, LOW);
  }
  
  delay(500);  // Adjust the delay based on your application and sensitivity
}
