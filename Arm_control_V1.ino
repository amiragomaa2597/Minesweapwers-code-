#include <Servo.h>
Servo x;  
Servo y; 
void setup() {
  x.attach(10);  // attaches the servo on pin 9 to the servo object
  x.attach(11);
  Serial.begin(9600);
}
void loop() {
  if (Serial.available()>0)
  {
    int Data = Serial.read();
    if ( Data == 'U' ) 
    {
        y.write(0); 
    }
     if ( Data == 'D' ) 
    {
        y.write(180); 
    }
     if ( Data == 'O' ) 
    {
        x.write(180); 
    }
     if ( Data == 'C' ) 
    {
       x.write(70); 
    }
  }              
}
