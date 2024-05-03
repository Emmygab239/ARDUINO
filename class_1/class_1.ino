int ledpin = 9;
int button = 12;
bool buttonState;

void setup() {
  pinMode(ledpin, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(button);
  if (!buttonState) {
    digitalWrite(ledpin,HIGH);
  }
  else {
    digitalWrite(ledpin, LOW);
  }

  
}
/* This Arduino code sets up a simple circuit where an LED is controlled by a push button. Let's break it down step by step:

Variable Declarations:

ledpin: This variable is assigned the value 9, representing the digital pin to which the LED is connected.
button: This variable is assigned the value 12, representing the digital pin to which the push button is connected.
buttonState: This variable is of boolean type (true/false) and will be used to store the state of the push button.
Setup Function (setup()):

pinMode(ledpin, OUTPUT): This line configures the ledpin as an output pin, indicating that it will be used to send signals to the LED.
pinMode(button, INPUT): This line configures the button pin as an input pin, indicating that it will be used to read the state of the push button.
Loop Function (loop()):

This function runs repeatedly as long as the Arduino is powered on.
buttonState = digitalRead(button): This line reads the state of the push button (whether it's pressed or not) and stores the result in the buttonState variable.
if (!buttonState) { digitalWrite(ledpin, HIGH); }: This conditional statement checks if the buttonState is false, meaning the button is pressed (assuming the button is wired such that it reads LOW when pressed). If the button is pressed, it turns the LED on by setting the ledpin to HIGH (5V).
else { digitalWrite(ledpin, LOW); }: If the button is not pressed (buttonState is true), it turns off the LED by setting the ledpin to LOW (0V).
Overall, this code creates a simple circuit where pressing the push button turns the LED on, and releasing it turns the LED off.






 */
