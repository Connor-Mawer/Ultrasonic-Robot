#include <Ranger.h>
#include <Servo.h>
#include <Arduino.h>

void setup()
{
    long duration;

    int distance;

    Servo myservo;
} 

void Test_Turning_Distance()
{
    myservo.write(90); // This is an angle 
                
    delayMicroseconds(30000)
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
                
    duration = pulseIn(echoPin, HIGH);
                
    distance = duration * 0.34 / 2;  

    //only testing the (forward) distance while turning ie directly infront
    
}

void Test_Moving_Distance()
{

    void Test_FDistance()
    {
        myservo.write(90); // This is an angle 
        
        delayMicroseconds(30000)
        digitalWrite(trigPin, LOW);
        delayMicroseconds(2);
        digitalWrite(trigPin, HIGH);
        delayMicroseconds(10);
        digitalWrite(trigPin, LOW);
        
        duration = pulseIn(echoPin, HIGH);
        
        distance = duration * 0.34 / 2;
    }

    void Test_RDistance()
    {
        myservo.write(177);
        delayMicroseconds(30000)
        digitalWrite(trigPin, LOW);
        delayMicroseconds(2);
        digitalWrite(trigPin, HIGH);
        delayMicroseconds(10);
        digitalWrite(trigPin, LOW);
        
        duration = pulseIn(echoPin, HIGH);
        
        distance = duration * 0.34 / 2;
    }

    void Test_FDistance()
    {
        myservo.write(90); // This is an angle 
        delayMicroseconds(30000)
        digitalWrite(trigPin, LOW);
        delayMicroseconds(2);
        digitalWrite(trigPin, HIGH);
        delayMicroseconds(10);
        digitalWrite(trigPin, LOW);
        
        duration = pulseIn(echoPin, HIGH);
        
        distance = duration * 0.34 / 2;
    }

    void Test_LDistance()
    {
        myservo.write(5); // This is an angle 
        delayMicroseconds(30000)
        digitalWrite(trigPin, LOW);
        delayMicroseconds(2);
        digitalWrite(trigPin, HIGH);
        delayMicroseconds(10);
        digitalWrite(trigPin, LOW);
        
        duration = pulseIn(echoPin, HIGH);
        
        distance = duration * 0.34 / 2;
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