#include <ranger.h>




void ranger_begin() 
{
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  Serial.begin(9600); 
  myservo.attach(5);
}

void Distance() 
  {

    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance = duration * 0.034 / 2; // in cm 
  }

void Test_FDistance()
  {
    myservo.write(90); 
    delay(250);
    Distance();
    distance = FDistance;
  }


void Test_RDistance()
  {
    myservo.write(177);
    delay(250);
    Distance();
    distance = RDistance;
  }


void Test_LDistance()
  {
    myservo.write(5); 
    delay(500);
    Distance();
    distance = LDistance;
  }


void Test_Turning_Direction()
{
   
    Test_RDistance();
    delay(500);

    Test_LDistance();
    delay(500);

  if (LDistance > RDistance)
    { 
      left();
    }

  else if (RDistance > LDistance)
    { 
      right();
    }
  else 
    {
      back();
    }

}