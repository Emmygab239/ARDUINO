/*
 Controlling a servo position using a potentiometer (variable resistor)
 by Michal Rinott <http://people.interaction-ivrea.it/m.rinott>

 modified on 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Knob
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo


void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  int potvalue1 = analogRead(01);            // 
  int anglevalue1 = map(potvalue1, 0, 1023, 0, 180);     // scale it for use with the servo (value between 0 and 180)
  myservo.write(anglevalue1);                  // sets the servo position according to the scaled value
                           
}
