int led = 9;
int button = 12;
bool buttonState;
bool ledState = false;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {

  buttonState = digitalRead(button);

  if (buttonState) {
    delay(1000);
    if (ledState) {
      digitalWrite(led, LOW);
      ledState = false;
    } else {
      digitalWrite(led, HIGH);
      ledState = true;
    }
  }
}
