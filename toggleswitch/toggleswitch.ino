int ledpin = 2;
int button = 7;
int buttonOld=1;
int buttonNew;
int ledstate=0;

void setup() {
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  buttonNew = digitalRead(button);
  if (buttonOld==0 && buttonNew==1){
    if(ledstate==0){
    digitalWrite(ledpin, HIGH);
      ledstate=1;
    }   
  else{
      digitalWrite(ledpin, LOW);
      ledstate=0;
  }
  }
  buttonOld=buttonNew;
  delay(100);
}
