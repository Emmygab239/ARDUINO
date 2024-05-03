int button_pin=2;
int button_state;
int led_pin=7;


void setup() {
  Serial.begin(9600);
  pinMode(button_pin, INPUT);
  pinMode(led_pin, OUTPUT);

}

void loop() {
  button_state = digitalRead(button_pin);
  Serial.println(button_state);
  //BUTTON STATE IS PRESSED BECAUSE IS READING 1 INITIALLY WHICH IS HIGH
  if(button_state==0){
    digitalWrite(led_pin, LOW);
    }
    else{
      digitalWrite(led_pin, HIGH);
      }

}
