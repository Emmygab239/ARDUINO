int ledpin = 12;
int ledblink = 4;
int i;
//make led blink for a number of times
void setup() {
  pinMode(ledpin, OUTPUT);
}

void loop() {

  for (i = 1; i <= ledblink; i = i + 1 ) {
    digitalWrite(ledpin, HIGH);
    delay(1000);

    digitalWrite(ledpin, LOW);
    delay(1000);

  }
}
