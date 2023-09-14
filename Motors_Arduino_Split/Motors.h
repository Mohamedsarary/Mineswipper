#ifndef MOTORS_H
#define MOTORS_H
#include <Arduino.h>



void Motor_voidInit();
void Move_voidForw();
void Move_voidBack();
void Move_voidLeft();
void Move_voidRight();
void Move_voidStop();
void Servo1_voidMove( int degree );
void Servo2_voidMove( int degree );
void Servo3_voidMove( int degree );



#endif
