#include <Servo.h>
Servo x;  
Servo y; 
int Ax = 80 ,Ay = 180 ;
void setup() {
  y.attach(11);  // attaches the servo on pin 9 to the servo object
  x.attach(8);
  x.write(Ax); 
  y.write(Ay);
  Serial.begin(9600);
}
void loop() {
  if (Serial.available()>0)
  {
    int Data = Serial.read();
    if ( Data == 'U' Ax < 180 ) 
    {
      Ay += 10 ; 
      Serial.println(Ay);
      y.write(Ay);   
    }
     if ( Data == 'D' && Ay > 50 ) 
    {
      Ay -= 10 ; 
      Serial.println(Ay);
        y.write(Ay); 
    }
     if ( Data == 'O' && Ax < 100  ) 
    {
      Ax += 10 ; 
      Serial.println(Ax);
        x.write(Ax); 
    }
     if ( Data == 'C' && Ax > 80) 
    {
      Ax -=10;
      Serial.println(Ax);
       x.write(Ax); 
    }
  }              
}
