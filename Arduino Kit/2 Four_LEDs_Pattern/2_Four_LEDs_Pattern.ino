const int led1 = 10;
const int led2 = 6;
const int led3 = 9;
const int led4 = 11;
const int buzzer = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  delay(350);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  delay(350);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  delay(350);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  delay(350);

  digitalWrite(buzzer, HIGH);
  delay(100);
  digitalWrite(buzzer, LOW);

  // pattern two

  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);
  delay(300);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(300);

  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);
  delay(300);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(300);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);

  digitalWrite(buzzer, HIGH);
  delay(100);
  digitalWrite(buzzer, LOW);

  // pattern three

  // Move LEDs from left to right
  digitalWrite(led1, HIGH);
  delay(100);
  digitalWrite(led1, LOW);

  digitalWrite(led2, HIGH);
  delay(100);
  digitalWrite(led2, LOW);

  digitalWrite(led3, HIGH);
  delay(100);
  digitalWrite(led3, LOW);

  digitalWrite(led4, HIGH);
  delay(100);
  digitalWrite(led4, LOW);

  // Move LEDs from right to left

  digitalWrite(led3, HIGH);
  delay(100);
  digitalWrite(led3, LOW);

  digitalWrite(led2, HIGH);
  delay(100);
  digitalWrite(led2, LOW);

  digitalWrite(led1, HIGH);
  delay(100);

  digitalWrite(led1, HIGH);
  delay(100);
  digitalWrite(led1, LOW);

  digitalWrite(led2, HIGH);
  delay(100);
  digitalWrite(led2, LOW);

  digitalWrite(led3, HIGH);
  delay(100);
  digitalWrite(led3, LOW);

  digitalWrite(led4, HIGH);
  delay(100);
  digitalWrite(led4, LOW);

  // Move LEDs from right to left
  digitalWrite(led4, HIGH);
  delay(100);
  digitalWrite(led4, LOW);

  digitalWrite(led3, HIGH);
  delay(100);
  digitalWrite(led3, LOW);

  digitalWrite(led2, HIGH);
  delay(100);
  digitalWrite(led2, LOW);

  digitalWrite(led1, HIGH);
  delay(100);


  digitalWrite(buzzer, HIGH);
  delay(100);
  digitalWrite(buzzer, LOW);

  // Pattern 4 :
  // Chasing pattern from left to right
  for (int i = 0; i < 2; i++) {
    digitalWrite(led1, HIGH);
    delay(300);
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    delay(300);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    delay(300);
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH);
    delay(300);
    digitalWrite(led4, LOW);
  }


  digitalWrite(buzzer, HIGH);
  delay(100);
  digitalWrite(buzzer, LOW);
}
