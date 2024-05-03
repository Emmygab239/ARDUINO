int led1=7;

void setup() {
  // put your setup code here, to run once:
pinMode(7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1,HIGH);
  delay(200);
  digitalWrite(led1,LOW);
  delay(200);

}
