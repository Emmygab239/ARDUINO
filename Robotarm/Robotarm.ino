
#include <Servo.h>
//Servo myservo1;  // create servo object to control a servo
//Servo myservo2;
Servo myservo3;

Servo myservo4;
Servo myservo5;
Servo myservo6;

void setup() {
  //myservo1.attach(9);  // attaches the servo on pin 3 D9 to the servo object
  //myservo2.attach(10); // 2 D10
  myservo3.attach(11); // 1D11

  myservo4.attach(5); //4D5
  myservo5.attach(7); //D7
  myservo6.attach(6); //D6
}

void loop() {
  // put your main code here, to run repeatedly:
  int potValue1 = analogRead(01); // value read from the joystick
  int potValue2 = analogRead(02);
  
  int potValue3 = analogRead(00);
  int potValue4 = analogRead(03);

  int angleValue1 = map(potValue1, 0, 1023, 0, 180); // set servo position
  int angleValue2 = map(potValue2, 0, 1023, 0, 180);

  int angleValue3 = map(potValue3, 0, 1023, 0, 180);
  int angleValue4 = map(potValue4, 0, 1023, 0, 180);
  
// myservo1.write(angleValue1);  // set servo to anglevalue1
myservo4.write(180); 

//myservo2.write(angleValue2); 
myservo5.write(180); 

myservo3.write(180); 
myservo6.write(180); 

}
