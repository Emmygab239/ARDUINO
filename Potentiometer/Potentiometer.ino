int pot=A0;
int x;

void setup() {
Serial.begin(9600);
pinMode(A0,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
x=analogRead(pot);
Serial.println(x);
delay(1000);
}
