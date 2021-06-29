// #include <Motors.h>

// Motors::Motors(void)
// {
//     pinMode(PIN_MOTOR_LEFT_A, OUTPUT);
//     pinMode(PIN_MOTOR_LEFT_B, OUTPUT);
//     pinMode(PIN_MOTOR_RIGHT_A, OUTPUT);
//     pinMode(PIN_MOTOR_RIGHT_B, OUTPUT);
// }


// void Motors::begin(void)
// {
//     this->stop();
// }

// void Motors::move(int16_t distance) 
// {
//     float revs = (abs(distance) / WHEEL_CIRCUMFERENCE); // number of revolutions to turn
//     float duration = revs / MOTOR_RPS; // number of seconds to have motors on
//     uint32_t durationMS = duration * 1000;
    
//     if(distance > 0)
//     {
//         this->_forward(durationMS); 
//     }

//     else if(distance < 0)
//     {
//         this->_backward(durationMS);
//     }

//     else
//     {   
//         this->stop();
//     }
// }


// void Motors::_forward(uint32_t duration)
// {
//     // set our timers
//     this->_startTimeMS = millis();
//     this->_duration = duration;

//     // set our motors
//     digitalWrite(PIN_MOTOR_LEFT_A, HIGH);
//     digitalWrite(PIN_MOTOR_LEFT_B, LOW);
//     digitalWrite(PIN_MOTOR_RIGHT_A, HIGH);
//     digitalWrite(PIN_MOTOR_RIGHT_B, LOW);

//     // set our global state
//     this->_idle = false;
// }

// void Motors::_backward(uint32_t duration)
// {
//     // set our timers
//     this->_startTimeMS = millis();
//     this->_duration = duration;

//     // set our motors
//     digitalWrite(PIN_MOTOR_LEFT_A, LOW);
//     digitalWrite(PIN_MOTOR_LEFT_B, HIGH);
//     digitalWrite(PIN_MOTOR_RIGHT_A, LOW);
//     digitalWrite(PIN_MOTOR_RIGHT_B, HIGH);

//     // set our global state
//     this->_idle = false;
// }



// void Motors::turn(int16_t angle)
// {

// }

// void Motors::_left(uint32_t duration)
// {

//     // set our global state
//     this->_idle = false;
// }
// void Motors::_right(uint32_t duration)
// {

//     // set our global state
//     this->_idle = false;
// }




// bool Motors::stop(void)
// {
//     digitalWrite(PIN_MOTOR_LEFT_A, LOW);
//     digitalWrite(PIN_MOTOR_LEFT_B, LOW);
//     digitalWrite(PIN_MOTOR_RIGHT_A, LOW);
//     digitalWrite(PIN_MOTOR_RIGHT_B, LOW);

//     this->_idle = true;
// }


// void Motors::loop(void)
// {
//     // note, this will always check and execute after it's stopped
//     if(millis() - this->_startTimeMS > this->_duration)
//     {
//         this->stop();
//     }
// }



// bool Motors::idle(void)
// {
//     return this->_idle;
// }