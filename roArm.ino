#include <Servo.h>

Servo servo1; 
Servo servo2; 
Servo servo3; 
Servo servo4; 

const int potpin1 = 0; 
const int potpin2 = 1;
const int potpin3 = 2;
const int potpin4 = 3;

int val1;      
int val2; 
int val3; 
int val4; 

void setup() {
  Serial.begin(9600);
  servo1.attach(11);  
  servo2.attach(10);
  servo3.attach(9);
  servo4.attach(6);
}

void loop() {
  
  val1 = analogRead(potpin1);            
  val1 = map(val1, 0, 1023, 0, 180);     
  servo1.write(val1);                 
  
  val2 = analogRead(potpin2);            
  val2 = map(val2, 0, 1023, 0, 180);     
  servo2.write(val2);                 

  val3 = analogRead(potpin3);            
  val3 = map(val3, 0, 1023, 0, 180);     
  servo3.write(val3);  

  val4 = analogRead(potpin4);            
  val4 = map(val4, 0, 1023, 0, 180);     
  servo4.write(val4);  
  
  delay(200);   
} 
