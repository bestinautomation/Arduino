const int sensorPin = A3;  // Analog sensor connected to pin A3
const int led1Pin = 10;    // Connect LED 1 to pin 2
const int led2Pin = 6;    // Connect LED 2 to pin 3
const int led3Pin = 9;    // Connect LED 3 to pin 4
const int led4Pin = 11;    // Connect LED 4 to pin 5

void setup() {
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(led3Pin, OUTPUT);
  pinMode(led4Pin, OUTPUT);
}

void loop() {
  // Read analog sensor value
  int sensorValue = analogRead(sensorPin);

  // Map the sensor value to a range of 0-100
  int mappedValue = map(sensorValue, 0, 1023, 0, 100);

  // Turn on LEDs based on threshold values
  if (mappedValue >= 25) {
    digitalWrite(led1Pin, HIGH);
  } else {
    digitalWrite(led1Pin, LOW);
  }

  if (mappedValue >= 50) {
    digitalWrite(led2Pin, HIGH);
  } else {
    digitalWrite(led2Pin, LOW);
  }

  if (mappedValue >= 75) {
    digitalWrite(led3Pin, HIGH);
  } else {
    digitalWrite(led3Pin, LOW);
  }

  if (mappedValue == 100) {
    digitalWrite(led4Pin, HIGH);
  } else {
    digitalWrite(led4Pin, LOW);
  }
}
