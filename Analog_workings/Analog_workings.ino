#include <LiquidCrystal.h>
int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd (rs, en, d4, d5, d6, d7);
int Pot= A0;
int Pot_value;
int A;
void setup() {
  lcd.begin(16,2);
  pinMode(Pot, INPUT);
  Serial.begin(9600);
}

void loop() {
  Pot_value=analogRead(Pot);
  delay(1000);
  Serial.println(Pot_value);
  lcd.setCursor(4,0);
  lcd.print(Pot_value);
  delay(900);
  lcd.clear();
  
  }
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
