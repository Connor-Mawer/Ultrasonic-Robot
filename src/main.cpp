#include <Arduino.h>
#include <Servo.h>
#include <ranger.h>
#include <motors.h>


void setup()
{
  ranger_begin();
}


void loop()
{
  Test_FDistance();
  
  if (FDistance > 20)
  {
    forward();
  }
  else
  {
    stop();
    Test_Turning_Direction();
  }
}