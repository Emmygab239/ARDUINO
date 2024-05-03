int ledpin=6;
int potpin=A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(6, OUTPUT);
  pinMode(A0, INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  potpin = analogRead(A0);
  ledpin = map(potpin, 0, 1023, 0, 255);
  analogWrite(6, ledpin);
  }
