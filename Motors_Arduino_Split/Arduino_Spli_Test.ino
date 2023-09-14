#include "Motors.h"


void setup() 
{
  Motor_voidInit();

}

void loop() {
  Servo1_voidMove(50);
  delay(3000);
  Servo1_voidMove(30);
  delay(3000);
  Servo1_voidMove(30);
  delay(3000);
  Servo1_voidMove(30);
  delay(3000);
}
