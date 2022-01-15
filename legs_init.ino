// Locate the initial position of legs 
// RegisHsu 2015-09-09
/*
 * RegisHsu
  LEG1--TIBIA---D3
        FEMUR---D2
        COXA----D4

  LEG2--TIBIA---D6
        FEMUR---D5
        COXA----D7

  LEG3--TIBIA---D9
        FEMUR---D8
        COXA----D10 

  LEG4--TIBIA---D12
        FEMUR---D11
        COXA----D13
 */
#include <Servo.h>   

Servo servo[4][3];

//define servos' ports
const int servo_pin[4][3] = { {2, 3, 4}, {5, 6, 7}, {8, 9, 10}, {11, 12, 13} };

void setup()
{
  //initialize all servos
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      servo[i][j].attach(servo_pin[i][j]);
      delay(20);
    }
  }
}

void loop(void)
{
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      servo[i][j].write(90);
      delay(20);
    }
  }
}
