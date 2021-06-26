#include <Arduino.h>
#include <Motors.h>
#include <Ranger.h>

Motors motors;
enum state = {IDLE, TURNING, MOVING};

void setup() 
{
    motors.begin();
    //motors.move(1000);
}

void loop() 
{
    motors.loop();

    // "state machine"
    switch(state)
    {
        // we're idle check for new direction, take measurement and start turning.
        case IDLE:
        {
            vector_t range = ranger.measure(CENTRE);
            switch(range.angle)
            {
                case LEFT :
                    motors.turn(45);
                    state = TURNING;
                break;

                case CENTRE :
                    // no turning
                    state = TURNING;
                break;

                case RIGHT :
                    motors.turn(-45);
                    state = TURNING;
                break;
            }
        }
        break;

        case TURNING: 
            if(motors.idle())   // we have finished turning
            {
                motors.move(100);
                state = MOVING;
            }
        break;

        case MOVING:
            if(motors.idle())
            {
                state = IDLE;
            }
        break;
    }
    


    
}