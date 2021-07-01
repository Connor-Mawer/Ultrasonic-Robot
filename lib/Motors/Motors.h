#ifndef MOTORS_H
#define MOTORS_H

#include <Arduino.h>

class Motors
{
    private:
        int _pinLB;
        int _pinLF;
        int _pinRB;
        int _pinRF;

    public:
        Motors(int pinLB, int pinLF, int pinRB, int pinRF);

        /*
            Setup the pins
        */
        void begin();

        /* 
            move the thing forward
        */
        void forward();
        void right();
        void left();
        void back();
        void stop();
};
#endif