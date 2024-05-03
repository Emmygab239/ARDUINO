int LED_RED = 2;
int LED_YELLOW = 4;
int LED_GREEN = 6;
int button_pin = 7;
int button_old = 1;
int button_new;
int LED_STATE1 =0;
int LED_STATE2 =0;
int LED_STATE3 =0;


void setup() {
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
  pinMode(button_pin, INPUT);
  Serial.begin(9600);

}

void loop() {
  button_new = digitalRead(button_pin);
  if (button_old == 0 && button_new == 1) {
    if (LED_STATE1 == 0) {
      digitalWrite(LED_RED, HIGH);
      delay(100);
      digitalWrite(LED_RED, LOW);

    if(LED_STATE2 == 0)
      digitalWrite(LED_YELLOW, HIGH);
      delay(100);
      digitalWrite(LED_YELLOW, LOW);

    if(LED_STATE3 == 0)
      digitalWrite(LED_GREEN, HIGH);
      delay(100);
      digitalWrite(LED_GREEN, LOW);
      
      LED_STATE1 = 1;
      LED_STATE2 = 1;
      LED_STATE3 = 1;





      
    }
    else {
      digitalWrite(LED_RED, LOW);
      digitalWrite(LED_YELLOW, LOW);
      digitalWrite(LED_GREEN, LOW);
      LED_STATE1 = 0;
      LED_STATE2 = 0;
      LED_STATE3 = 0;
      
    }
