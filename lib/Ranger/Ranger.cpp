#include <Ranger.h>
#include <Servo.h>
#include <Arduino.h>
#include <Distnace.cpp>


Servo myservo;

void setup()
{
    long duration;
    int distance;
    myservo.attach(5);
} 

void Test_Turning_Distance()
{
    myservo.write(90); // This is an angle 
    Distance();
}

void Test_Moving_Distance()
{

    void Test_FDistance()
    {
        myservo.write(90); // This is an angle 
        delayMicroseconds(30000);
        Distance();
    }

    void Test_RDistance()
    {
        myservo.write(177);
        delayMicroseconds(30000);
        Distance();
    }

    void Test_FDistance()
    {
        myservo.write(90); 
        delayMicroseconds(30000);
        Distance();
    }

    void Test_LDistance()
    {
        myservo.write(5); // This is an angle 
        delayMicroseconds(30000);
        Distance();
    }
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