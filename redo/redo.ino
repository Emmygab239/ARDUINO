int ledpin = 12;
int ledblink = 4;
int i;
//make led blink for a number of times
void setup() {
  pinMode(ledpin, OUTPUT);

}

void loop() {

  for (i=1; i<=ledblink; i++ ) {
    digitalWrite(ledpin, HIGH);
    delay(150);
    digitalWrite(ledpin, LOW);
    delay(150);
  }
    delay(3000);
  
}
