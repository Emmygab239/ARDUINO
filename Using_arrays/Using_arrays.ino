int button_pin = 7;
int buttonState;
# define numleds 3;
int LEDs[3] = {2, 4, 6};



void setup() {
  pinMode(button_pin, INPUT);
  for (int i = 0; i < 3; i++) {
    pinMode(LEDs[i], OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(button_pin);
  Serial.println(buttonState);
  delay(1000);
  if (buttonState == 0) {
    for (int i = 0; i < 3; i++) {
      digitalWrite(LEDs[i], HIGH);
    }
  } else {
    for (int i = 0; i < 3; i++) {
      digitalWrite(LEDs[i], LOW);
    }
  }

}
