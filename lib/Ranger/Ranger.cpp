#include <Ranger.h>
#include <Servo.h>
#include <Arduino.h>

Servo myservo;


long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurement
int FDistance;
int LDistance;
int RDistance;

void setup() 
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
    distance = duration * 0.34 / 2; //Ive converted it to mm by adjusting 0.034 to 0.34
  }

void Test_FDistance()
  {
    myservo.write(90); // This is an angle 
    delay(250);
    Distance();
    distance = FDistance;
  }


void Test_RDistance()
  {
    myservo.write(177);
    delay(250)
    Distance();
    distance = RDistance;
  }


void Test_LDistance()
  {
    myservo.write(5); // This is an angle 
    delay(250);
    Distance();
    distance = LDistance;
  }

void Test_Turning_Distance()
{
    Test_FDistance();
}

void Test_Moving_Distance()
{
    Test_FDistance();

    Test_RDistance();

    Test_LDistance();

    Test_RDistance();

    // if (FDistance > 100)
    // {
    //     forward();
    // }
    
    // if (LDistance > RDistance)
    // { 
    //     left();
    // }

    // if (RDistance > LDistance)
    // { 
    //     right();
    // }

    // else 
    // {
    //     back();
    // }



}




    // Ranger::Ranger(void) {}

   // vector_t Ranger::measure(void)
    //{
       // vector_t vector;

        // move servo to left
        // take measurement

        // move servo to centre
        // take measurement

        // move servo to right
        // take measurement

        // work out the largest distance
        // return this and the angle

        
       // vector.distance = 100;
       // vector.angle = LEFT;
       // return vector;

        
  //  }