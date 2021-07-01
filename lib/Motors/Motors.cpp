
#include <Motors.h>


Motors::Motors(int pinLB, int pinLF, int pinRB, int pinRF)
{
    _pinLB = pinLB;
    _pinLF = pinLF;
    _pinRB = pinRB;
    _pinRF = pinRF;
}

void Motors::begin()
{
    pinMode(_pinLB, OUTPUT);
    pinMode(_pinLF, OUTPUT);
    pinMode(_pinRB, OUTPUT);
    pinMode(_pinRF, OUTPUT);
}

void Motors::forward()
{
    digitalWrite(_pinRB,LOW);
    digitalWrite(_pinRF,HIGH);
    digitalWrite(_pinLB,LOW);
    digitalWrite(_pinLF,HIGH); 
}

void Motors::right()
{
    digitalWrite(_pinRB,LOW);
    digitalWrite(_pinRF,HIGH);
    digitalWrite(_pinLB,HIGH);
    digitalWrite(_pinLF,LOW); 
    
}

void Motors::left()
{
    digitalWrite(_pinRB,HIGH);
    digitalWrite(_pinRF,LOW);
    digitalWrite(_pinLB,LOW);
    digitalWrite(_pinLF,HIGH);
}

void Motors::back()
{
    digitalWrite(_pinRB,HIGH);
    digitalWrite(_pinRF,LOW);
    digitalWrite(_pinLB,HIGH);
    digitalWrite(_pinLF,LOW);
}

void Motors::stop()
{
    digitalWrite(_pinRB,HIGH);
    digitalWrite(_pinRF,HIGH);
    digitalWrite(_pinLB,HIGH);
    digitalWrite(_pinLF,HIGH);
}
