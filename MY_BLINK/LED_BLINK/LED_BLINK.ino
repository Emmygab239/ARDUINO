
int ledl=7; 

void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledl, HIGH);
  delay(150);
  digitalWrite(ledl, LOW);
  delay(150);

}
