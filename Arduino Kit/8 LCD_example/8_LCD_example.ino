#include <LiquidCrystal.h>
const int rs = 5, en = 3, d4 = 2, d5 = 16, d6 = 15, d7 = 14;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


void setup() {
  pinMode(13, OUTPUT);
  lcd.begin(16, 2);
  lcd.print("    WELCOME  ");  //printing message "HELLO WORLD" on LCD Screen
  delay(2000);
  lcd.clear();
  lcd.display();  //LCD will display message on line 1

  lcd.print("     Bestin     ");
  lcd.setCursor(0, 1);
  lcd.print("   Automation   ");

  delay(2000);
  // lcd.clear();
  // lcd.print("   HELLO! DAV ");
  // lcd.setCursor(0, 1);
  // lcd.print(" Public School ");

}

void loop() {
  digitalWrite(13, HIGH);
  delay(400);
  digitalWrite(13, LOW);
  delay(400);
}
