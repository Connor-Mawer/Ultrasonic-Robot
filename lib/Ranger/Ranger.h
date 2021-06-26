#ifndef RANGER_H
#define RANGER_H
#include <Arduino.h>


typedef enum {
    LEFT,
    CENTRE,
    RIGHT
} RangeAngle;

typedef struct 
{
    uint16_t distance;
    RangeAngle angle;
} vector_t;



class Ranger
{
    private:


    public:
        Ranger(void);

        vector_t measure(void);
};

#endif