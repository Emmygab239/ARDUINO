/*
 Controlling a servo position using a potentiometer (variable resistor)
 by Michal Rinott <http://people.interaction-ivrea.it/m.rinott>

 modified on 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Knob
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
Servo myservo1;
Servo myservo2;
Servo myservo3;


void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo1.attach(10);
  myservo2.attach(11);
  myservo3.attach(5);
}

void loop() {
  int potvalue1 = analogRead(00);            // 
  int anglevalue1 = map(potvalue1, 0, 1023, 0, 180);     // scale it for use with the servo (value between 0 and 180)

  
  int potvalue2 = analogRead(01);
  int anglevalue2 = map(potvalue2, 0, 1023, 0, 180);


  int potvalue3 = analogRead(02);
  int anglevalue3 = map(potvalue3, 0, 1023, 0, 180);


  int potvalue4 = analogRead(03);
  int anglevalue4 = map(potvalue4, 0, 1023, 0, 180);

  
  myservo.write(anglevalue1);                  // sets the servo position according to the scaled value
  myservo1.write (anglevalue2);
  myservo2.write (anglevalue3);
  myservo3.write (anglevalue4);                         
}
