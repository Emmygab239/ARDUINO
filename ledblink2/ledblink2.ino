int s=6;
int x;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(6,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  x=digitalRead(s);
  Serial.println(x);
  delay(1000);
}
