int Buzzer=9;
int Button=12;
int ButtonState;

void setup() {
  pinMode(Button, INPUT);
  pinMode(Buzzer, OUTPUT);

}

void loop() {
  ButtonState=digitalRead(Button);
  if(ButtonState==1){
    digitalWrite(Buzzer, HIGH);
    }
    else{
      digitalWrite(Buzzer, LOW);
      }
}
