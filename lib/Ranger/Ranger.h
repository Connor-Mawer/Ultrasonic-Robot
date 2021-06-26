#ifndef RANGER_H
#define RANGER_H
#include <Arduino.h>


typedef struct 
{
    uint16_t distance;
    RangeAngle angle;
} vector_t;

enum RangeAngle {
    LEFT,
    CENTRE,
    RIGHT
};


class Ranger
{
    private:


    public:
        Ranger(void);

        vector_t measure(void);
};

#endif