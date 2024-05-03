#include <LiquidCrystal.h>
int rs = A4, en = A3, d4 = A2, d5 = A1, d6 = A0, d7 = 13;
LiquidCrystal lcd (rs, en, d4, d5, d6, d7);
int sensor_pin = 12;
int digitalValue;
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalValue=analogRead(sensor_pin);
  lcd.clear();
  lcd.setCursor(4,0); //(COL. * ROW)
  lcd.print(digitalValue);
  delay (1000);
}
