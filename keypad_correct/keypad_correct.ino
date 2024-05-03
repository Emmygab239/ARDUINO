/*Scan Keypad flow chart
  Scan Keypad:

  - For each row:

  - Set row pin LOW

  - For each column:

  - If column pin is LOW:

  - Wait for debounce

  - Read key from keys matrix

  - Return key

  - Set row pin HIGH

  - Return no key

  CALCULATE LOGIC
  operand 1 store left operand
  operand 2 store right operand
  operator  store operator
  if key not null or any operator sign or Clear or equal
    store digit value inside operand 1
  while key not null or any operator sign or Clear or equal
    concatenate digit value inside operand 1
  if key is an operator
    store operator value inside operator variable
  if key not null or any operator sign or Clear or equal
    store digit value inside operand 2
  while key not null or any operator sign or Clear or equal
    concatenate digit value inside operand 2
  if key is equal to
    convert operand 1 and operand 2 from char array or string to Float
    perform arthimetic operation based on the selected operator
    display the result



*/



#include <LiquidCrystal.h>

// Define LCD pins
const int rs = A4, en = A3, d4 = A2, d5 = A1, d6 = A0, d7 = 13;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

#define KEY_ROWS 4
#define KEY_COL 4

const byte rowPins[4] = {12, 11, 10, 9};
const byte colPins[4] = {8, 7, 6, 5};

float operand_1;
float operand_2;
char op;
int index_1;
int index_2;
bool checkOp;
float value_1;
char key;
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

float cal() {
  switch (op)
  {
    case '+':
      return operand_1 + operand_2;
      break;
    case '-':
      return operand_1 - operand_2;
      break;
    case '*':
      return operand_1 * operand_2;
      break;
    case '/':
      return operand_1 / operand_2;
      break;
    default:
      break;
  }
  return 0;
}

void store_operands() {
  if ((key == '+') || (key == '*') || (key == '-') || (key == '/') ) { // capture the operator
    op = key;
    checkOp = true;
  }

  if (!checkOp) {
    // capture the digit value for operand 1
    String ops_1;
    ops_1 += key;
    operand_1 = ops_1.toFloat();
  }

  else if (checkOp) {
    // capture the digit value for operand 2
    String ops_2;
    ops_2 += key;
    operand_2 = ops_2.toFloat();
  }
}

void setup() {
  lcd.begin(16, 2);
  lcd.clear();
  for (int m = 0; m < KEY_ROWS; m++) {
    pinMode(rowPins[m], OUTPUT);
    digitalWrite(rowPins[m], HIGH);
    pinMode(colPins[m], INPUT_PULLUP);
  }
  checkOp = false;

  /*for (int x = 0; x < 3; x++) {
    lcd.print("Booting");
    for (int i = 7; i <= 10; i++) {
      lcd.setCursor(i, 0);
      lcd.print(".");
      delay(600);
    }
    lcd.clear();
    }*/
  lcd.clear();
}


void loop() {
  key = scanKeyPad();
  if (key != '\0') {
    switch (key) {
      case 'C':
        lcd.clear();
        op = "";
        operand_1 = 0;
        operand_2 = 0;
        checkOp = false;
        break;

      case '=':
        lcd.setCursor(0, 1);
        lcd.print(cal());
        op = "";
        operand_1 = 0;
        operand_2 = 0;
        checkOp = false;
        break;

      default:
        store_operands();
        lcd.print(key);
    }
  }
}
