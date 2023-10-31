const int led1 = 10;
const int led2 = 6;
const int led3 = 9;
const int led4 = 11;

const int buzzer = 4;

const int button1 = 7;
const int button2 = 8;
const int button3 = 12;
const int button4 = 13;

int buttonState1 = 0, buttonState2 = 0, buttonState3 = 0, buttonState4 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(button4, INPUT);

  pinMode(buzzer, OUTPUT);
}

void loop() {
  buttonState1 = digitalRead(button1);
  buttonState2 = digitalRead(button2);
  buttonState3 = digitalRead(button3);
  buttonState4 = digitalRead(button4);

  if (buttonState1 == HIGH) {
    // Pattern 1:
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
  }
  if (buttonState2 == HIGH) {
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

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
  }

  if (buttonState3 == HIGH) {
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
    digitalWrite(led1, LOW);
  }

  if (buttonState4 == HIGH) {
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
  }
}
