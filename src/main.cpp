#include <Arduino.h>
#include <Ranger.h>
#include <Motors.h>


Ranger myRanger;
Motors myMotor(6, 9, 10, 11);


void setup()
{
  myRanger.begin();
  myMotor.begin();
  Serial.begin(9600); 
  

}


void loop()
{
  long distance = myRanger.getDistance();

  if(1)
  {
    myRanger.moveServoLeft();
  }
  
  if (distance > 20)
  {
    myMotor.forward();
  }
  else
  {
    myMotor.stop();
  }
}