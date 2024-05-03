int ledpin = 9;
int button = 12;
int i;
int ledblink=4;
bool buttonState;

void setup() {
  pinMode(ledpin, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  buttonState = digitalRead(button);
  if (!buttonState) {
    for (i=1; i<=ledblink; i++ ){
    digitalWrite(ledpin, HIGH);
    delay(200);
    digitalWrite(ledpin, LOW);
    delay(200);
  }
    delay(3000);
  

  } 
}
