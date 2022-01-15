// Locate the initial position of legs 
// RegisHsu 2015-09-09
/*
 * 
 */
#include <Servo.h>   

Servo servo[4][3];

//define servos' ports--RegisHsu

const int servo_pin[4][3] = { {2, 3, 4}, {5, 6, 7}, {8, 9, 10}, {11, 12, 13} };



/* 
definicao dos porta pinos do servos ARANHA CONTROLE REMOTO --RegisHsu
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

//define servos' ports--DIY GUY Chris
/*
 definicao dos porta pinos do servos SpiderBot Olhos--DIY GUY Chris

   LEG1--TIBIA---D12
        FEMUR---D11
        COXA----D13

  LEG2--TIBIA---D4
        FEMUR---D2
        COXA----D7

  LEG3--TIBIA---A1-15
        FEMUR---A0-14
        COXA----A2-16

  LEG4--TIBIA---D9
        FEMUR---D8
        COXA----D10

const int servo_pin[4][3] = { {11, 12, 13}, {2, 4, 7}, {14, 15, 16},{8, 9, 10} };/* Size of the robot ---------------------------------------------------------*/



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
