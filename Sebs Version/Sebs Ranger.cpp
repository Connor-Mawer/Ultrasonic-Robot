#include <Ranger.h>

Ranger::Ranger(void) {}

vector_t Ranger::measure(void)
    {
        vector_t vector;

            move servo to left
            take measurement

            move servo to centre
            take measurement

            move servo to right
            take measurement

            work out the largest distance
            return this and the angle

            
        vector.distance = 100;
        vector.angle = LEFT;
        return vector;

            
    }