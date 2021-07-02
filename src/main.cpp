#include <Arduino.h>
#include <Servo.h>
#include <ranger.h>
#include <motors.h>

void setup()
{
  Range_setup();
  Serial.begin(9600);
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