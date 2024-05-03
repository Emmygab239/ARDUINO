#define trig_pin 3
#define echo_pin 2

long duration;
int  distance;
void setup() {
  // put your setup code here, to run once:
  pinMode(trig_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // clears the trigger conditions
  digitalWrite(trig_pin, LOW);
  delayMicroseconds(2);
  //  Sets the trig_pin active for 10ms 
  digitalWrite(trig_pin, HIGH);
  delayMicroseconds(10);
  //  Read the echo pin returns the sound wave travel time in ms
  duration = pulseIn(echo_pin, HIGH);
  //  Calculating the distance
  distance = duration * 0.034/2; //speed of sound wave/2 because it travels to and fro
  //  displays the distance on the serial monitor
  
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println("cm");
}
