#ifndef RANGER_H
#define RANGER_H

#include <Arduino.h>

class Ranger
{
    private:
        //Servo _myservo;
        int echoPin = A0;
        int trigPin = A1;

    public:
        Ranger();
        void begin();
        long getDistance();

        void moveServoLeft();
        
        // void Test_FDistance();
        // void Test_RDistance();
        // void Test_LDistance();
        // void Test_Turning_Direction();
};

#endif