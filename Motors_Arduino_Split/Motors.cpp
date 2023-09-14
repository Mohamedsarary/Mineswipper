#include "Motors.h"

#include<Servo.h>

/********************************** DEFINITION OF DC MOTORS PINS  **********************************/
#define ML_F    12
#define ML_B    11
#define ML_PWM  13
#define MR_F    7
#define MR_B    5
#define MR_PWM  16
#define Serv_1  3
#define Serv_2  9
#define Serv_3  10
Servo servo1 ;
Servo servo2 ;
Servo servo3 ;

/********************************** FUNCTION TO INITIALIZE ALL MOTORS PINS AS OUTPUT  **********************************/
void Motor_voidInit()
{
  pinMode(ML_F,OUTPUT);
  pinMode(ML_B,OUTPUT);
  pinMode(ML_PWM,OUTPUT);
  pinMode(MR_F,OUTPUT);
  pinMode(MR_B,OUTPUT);
  pinMode(MR_PWM,OUTPUT);
  servo1.attach(Serv_1);
  servo2.attach(Serv_2);
  servo3.attach(Serv_3);
}


/****************************************** MOVING FUNCTIONS **************************************/
void Move_voidForw()
{ 
  digitalWrite(ML_F,HIGH);
  digitalWrite(ML_B,LOW);
  digitalWrite(MR_F,HIGH);
  digitalWrite(MR_B,LOW);    
}

void Move_voidBack()
{ 
  digitalWrite(ML_F,LOW);
  digitalWrite(ML_B,HIGH);
  digitalWrite(MR_F,LOW);
  digitalWrite(MR_B,HIGH);    
}

void Move_voidLeft()
{ 
  digitalWrite(ML_F,HIGH);
  digitalWrite(ML_B,LOW);
  digitalWrite(MR_F,LOW);
  digitalWrite(MR_B,HIGH);    
}

void Move_voidRight()
{ 
  digitalWrite(ML_F,LOW);
  digitalWrite(ML_B,HIGH);
  digitalWrite(MR_F,HIGH);
  digitalWrite(MR_B,LOW);    
}

void Move_voidStop()
{ 
  digitalWrite(ML_F,LOW);
  digitalWrite(ML_B,LOW);
  digitalWrite(MR_F,LOW);
  digitalWrite(MR_B,LOW);    
}

void Servo1_voidMove( int degree )
{
  servo1.write(degree);
}
void Servo2_voidMove( int degree )
{
  servo1.write(degree);
}
void Servo3_voidMove( int degree )
{
  servo1.write(degree);
}
