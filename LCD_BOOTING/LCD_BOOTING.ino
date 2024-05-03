#include <LiquidCrystal.h>
int i;
int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd (rs, en, d4, d5, d6, d7);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0, 0);
  lcd.print("Booting");
  for (i = 1; i < 11; i++) {
    delay(125);
    lcd.print(".");
    delay(125);
  }
  lcd.clear();
}
