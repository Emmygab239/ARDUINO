# include <Servo.h>
Servo myservo;
Servo myservo1;
int pos = 0;

void setup() {
myservo.attach(9);
myservo1.attach(10);

}

void loop() {
for (pos = 0; pos <= 180; pos += 1){
myservo.write(pos);             
delay(15);   
}
for (pos = 180; pos >= 0; pos -= 1) { 
myservo.write(pos);              
delay(15);                       
}

{
for (pos = 0; pos <= 180; pos += 1){
myservo1.write(pos);             
delay(15);   
}
for (pos = 180; pos >= 0; pos -= 1) { 
myservo1.write(pos);              
delay(15);                       
}

}
