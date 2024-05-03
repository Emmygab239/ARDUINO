#include <LiquidCrystal.h>
int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd (rs, en, d4, d5, d6, d7);
int pir = 9;
int pirState;
int buzzer = 6;
int i;
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  pinMode(pir, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  pirState = digitalRead(pir);
  if (pirState == 1) {
    lcd.clear();
    lcd.setCursor(4, 0); //(COL. * ROW)
    lcd.print("INTRUDER");
    for (i = 1; i <= 5; i++) {
      digitalWrite(buzzer, HIGH);
      delay(500);
      digitalWrite(buzzer, LOW);
      delay(500);
    }
  }
  else {
    lcd.print("SAFE");
    digitalWrite(buzzer, LOW);

  }
}
