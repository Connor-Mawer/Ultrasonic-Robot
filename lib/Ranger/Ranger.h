#ifndef RANGER_H
#define RANGER_H
#include <Arduino.h>


#define echoPin A0
#define trigPin A1 


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