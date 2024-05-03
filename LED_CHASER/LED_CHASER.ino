int LED_RED= 2;
int LED_YELLOW= 4;
int LED_GREEN= 6;
int button_pin= 7;
int button_state;

void setup() {
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
  pinMode(button_pin, INPUT);
  Serial.begin(9600);

}

void loop() {
  button_state=digitalRead(button_pin);
  if(button_state==0){
      digitalWrite(LED_RED, HIGH);
      delay(200);
      digitalWrite(LED_RED, LOW);
     
      digitalWrite(LED_YELLOW, HIGH);
      delay(200);
      digitalWrite(LED_YELLOW, LOW);
      
      digitalWrite(LED_GREEN, HIGH);
      delay(200);
      digitalWrite(LED_GREEN, LOW);
    }
  
    
    
    
    
}
