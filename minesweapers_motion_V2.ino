// C++ code
//
#define R_F  3
#define R_B  5
#define L_F  9
#define L_B  6


void setup()
{
  Serial.begin(9600);

  pinMode(R_F, OUTPUT);
  pinMode(R_B, OUTPUT);
  pinMode(L_F, OUTPUT);
  pinMode(L_B, OUTPUT);
}
void loop()
{
  if ( Serial.available() > 0 )
  {
    char data = Serial.read();
    if (data == 'F') {Forward();}
    if (data == 'B') {Backward();}
    if (data == 'R') {Right_Full();}
    if (data == 'L') {Left_Full();}

    if (data == 'S') {STOP();}
  }
 
}
void Forward(){
digitalWrite(R_F,1);
digitalWrite(R_B,0);
digitalWrite(L_F,1);
digitalWrite(L_B,0);
}
void Backward(){
digitalWrite(R_F,0);
digitalWrite(R_B,1);
digitalWrite(L_F,0);
digitalWrite(L_B,1);
}
void Right_Full(){
digitalWrite(R_F,1);
digitalWrite(R_B,0);
digitalWrite(L_F,0);
digitalWrite(L_B,1);
}

void Right_Forward(){
digitalWrite(R_F,1);
digitalWrite(R_B,0);
digitalWrite(L_F,0);
digitalWrite(L_B,0);
}

void Right_Backward(){
digitalWrite(R_F,0);
digitalWrite(R_B,1);
digitalWrite(L_F,0);
digitalWrite(L_B,0);
}

void Left_Full(){
digitalWrite(R_F,0);
digitalWrite(R_B,1);
digitalWrite(L_F,1);
digitalWrite(L_B,0);
}
void Left_Forward(){
digitalWrite(R_F,0);
digitalWrite(R_B,0);
digitalWrite(L_F,1);
digitalWrite(L_B,0);
}

void Left_Backward(){
digitalWrite(R_F,0);
digitalWrite(R_B,0);
digitalWrite(L_F,0);
digitalWrite(L_B,1);
}

void STOP(){
digitalWrite(R_F,0);
digitalWrite(R_B,0);
digitalWrite(L_F,0);
digitalWrite(L_B,0);
}