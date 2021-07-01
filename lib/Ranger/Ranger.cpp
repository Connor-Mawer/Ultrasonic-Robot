#include <Ranger.h>


Ranger::Ranger()
{}

void Ranger::begin() 
{
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  
  //_myservo.attach(5);
}

long Ranger::getDistance() 
{
  long distance;
  long duration;

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2; // in cm 

  return distance;
}

// void Test_FDistance()
//   {
//     myservo.write(90); 
//     delay(250);
//     Distance();
//     distance = FDistance;
//   }


// void Test_RDistance()
//   {
//     myservo.write(177);
//     delay(250);
//     Distance();
//     distance = RDistance;
//   }


// void Test_LDistance()
//   {
//     myservo.write(5); 
//     delay(500);
//     Distance();
//     distance = LDistance;
//   }


// void Test_Turning_Direction()
// {
   
//     Test_RDistance();
//     delay(500);

//     Test_LDistance();
//     delay(500);

//   if (LDistance > RDistance)
//     { 
//       myMotor.left();
//     }

//   else if (RDistance > LDistance)
//     { 
//       myMotor.right();
//     }
//   else 
//     {
//       myMotor.back();
//     }

// }