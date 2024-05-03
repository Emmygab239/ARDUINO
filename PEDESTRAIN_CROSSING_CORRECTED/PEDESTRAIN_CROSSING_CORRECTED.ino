#define RED_VEHICLE 2
#define YELLOW_VEHICLE 4
#define GREEN_VEHICLE 6
#define RED_PASSENGER 8
#define GREEN_PASSENGER 10
#define button_pin 7
#define buzzer 9
int i;

int buttonState;

void setup() {
  pinMode(RED_VEHICLE, OUTPUT);
  pinMode(YELLOW_VEHICLE, OUTPUT);
  pinMode(GREEN_VEHICLE, OUTPUT);
  pinMode(RED_PASSENGER, OUTPUT);
  pinMode(GREEN_PASSENGER, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(button_pin, INPUT);
  

  digitalWrite(GREEN_VEHICLE, HIGH);
  digitalWrite(RED_PASSENGER, HIGH);
  
}

void loop() {
  buttonState= digitalRead(button_pin);
  if(buttonState==0){

   
   digitalWrite(YELLOW_VEHICLE, HIGH);
   delay(3000);
   digitalWrite(YELLOW_VEHICLE, LOW);

   digitalWrite(GREEN_PASSENGER, HIGH);
   digitalWrite(RED_VEHICLE, HIGH);
   digitalWrite(GREEN_VEHICLE, LOW);
   digitalWrite(RED_PASSENGER, LOW);
 
    for(i=1; i<=10; i++){
   digitalWrite(buzzer, LOW);
   delay(1000);
   digitalWrite(buzzer, HIGH);
   delay(1000);
   digitalWrite(buzzer, LOW);
    }
    
   delay (10000);
    
   digitalWrite(YELLOW_VEHICLE, HIGH);
   delay(3000);
   digitalWrite(YELLOW_VEHICLE, LOW);

   
   digitalWrite(GREEN_PASSENGER, LOW);
   digitalWrite(RED_VEHICLE, LOW);
   digitalWrite(GREEN_VEHICLE, HIGH);
   digitalWrite(RED_PASSENGER, HIGH);

      
  }
 
}
