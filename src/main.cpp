#include <Arduino.h>
#include <Servo.h>
#include <Ranger.cpp>
#include <Motors-CM.cpp>


void setup();


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