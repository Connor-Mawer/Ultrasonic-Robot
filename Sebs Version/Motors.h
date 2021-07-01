#ifndef MOTORS_H 
#define MOTORS_H
#include <Arduino.h>
#include <MotorPins.h>

        //WHY DO I DEFINE THIS LIBRARY BUT NOT MOTORPINS

#define MOTOR_RPS 1.5 // seconds for full revolution
#define WHEEL_CIRCUMFERENCE 200 // mm
#define ROTATION_SPEED 0.2 // seconds for full revolution

class Motors
{
    private:

        uint32_t _startTimeMS;
        uint32_t _duration;
        bool _idle;

        void _forward(uint32_t duration);
        void _backward(uint32_t duration);
        void _left(uint32_t duration);
        void _right(uint32_t duration);



    public:
        Motors(void);

        void begin(void);

        /*
            gets called every loop to check motor duration against start
        */
        void loop(void);

        /*
            move the robot <distance> where forward is positive and reverse is negative.
            Distance is in mm
        */ 
        void move(int16_t distance);
        void turn(int16_t angle);
        bool stop(void);

        // are we moving or idle?
        bool idle(void);

};



#endif