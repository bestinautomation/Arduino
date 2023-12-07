// Define the pins for the ultrasonic sensor
const int trigPin = 9;  // Trig pin of the ultrasonic sensor
const int echoPin = 10; // Echo pin of the ultrasonic sensor

// Define the pin for the buzzer
const int buzzerPin = 11;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Set the trigPin as an OUTPUT
  pinMode(trigPin, OUTPUT);
  
  // Set the echoPin as an INPUT
  pinMode(echoPin, INPUT);

  // Set the buzzerPin as an OUTPUT
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // Trigger the ultrasonic sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure the echo duration
  long duration = pulseIn(echoPin, HIGH);

  // Calculate distance in centimeters
  int distance = duration * 0.034 / 2;

  // Print the distance to the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Check if the distance is more than 100cm
  if (distance > 100) {
    // If yes, turn on the buzzer
    tone(buzzerPin, 100);
  } else {
    // If no, turn off the buzzer
    //digitalWrite(buzzerPin, LOW);
    noTone(buzzerPin);
  }

  // Wait for a moment before the next measurement
  delay(500);
}
