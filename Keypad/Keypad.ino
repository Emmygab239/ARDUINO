

#include <LiquidCrystal.h>

// Define LCD pins
const int rs = A4, en = A3, d4 = A2, d5 = A1, d6 = A0, d7 = 13;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

#define KEY_ROWS 4
#define KEY_COL 4

const byte rowPins[4] = {12, 11, 10, 9};
const byte colPins[4] = {8, 7, 6, 5};

char keys[4][4] = {
  {'7', '8', '9', '/'},
  {'4', '5', '6', '*'},
  {'1', '2', '3', '-'},
  {'C', '0', '=', '+'}
};


char scanKeyPad() {
  for (int i = 0; i < KEY_ROWS; i++) {
    digitalWrite(rowPins[i], LOW);
    for (int j = 0; j < KEY_COL; j++) {
      if (digitalRead(colPins[j]) == LOW) {
        delay(50);
        while (digitalRead(colPins[j]) == LOW);
        digitalWrite(rowPins[i], HIGH);
        return keys[i][j];
      }
    }
    digitalWrite(rowPins[i], HIGH);
  }
  return '\0';
}
 void calculate(){
  
  }

void setup() {
  lcd.begin(16, 2);
  lcd.clear();
  for (int m = 0; m < KEY_ROWS; m++) {
    pinMode(rowPins[m], OUTPUT);
    digitalWrite(rowPins[m], HIGH);
    pinMode(colPins[m], INPUT_PULLUP);
  }

  for (int x = 0; x < 3; x++) {
    lcd.print("Booting");
    for (int i = 7; i <= 10; i++) {
      lcd.setCursor(i, 0);
      lcd.print(".");
      delay(600);
    }
    lcd.clear();
  }
}

void loop() {
  char key = scanKeyPad();
  if (key != '\0') {
    lcd.print(key);

    int result,num;
    num=key-'0';

     switch(key){
    case 'C':
    lcd.clear();
    break;

    case '+':
    result= num + num;
    break;

    case '=':
    lcd.setCursor(13,1);
    lcd.print(result);
    break;
    

    default:
    lcd.print("");

  
     }
  }
}

 
