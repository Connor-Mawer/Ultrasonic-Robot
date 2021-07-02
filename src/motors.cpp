#include <motors.h>

void pins()

{
    pinMode(pinLB, OUTPUT);
    pinMode(pinLF, OUTPUT);
    pinMode(pinRB, OUTPUT);
    pinMode(pinRF, OUTPUT);
}

void forward()
{
    digitalWrite(pinRB,LOW);
    digitalWrite(pinRF,HIGH);
    digitalWrite(pinLB,LOW);
    digitalWrite(pinLF,HIGH); 
}

void right()
{
    digitalWrite(pinRB,LOW);
    digitalWrite(pinRF,HIGH);
    digitalWrite(pinLB,HIGH);
    digitalWrite(pinLF,LOW); 
    
}

void left()
{
    digitalWrite(pinRB,HIGH);
    digitalWrite(pinRF,LOW);
    digitalWrite(pinLB,LOW);
    digitalWrite(pinLF,HIGH);
}

void back()
{
    digitalWrite(pinRB,HIGH);
    digitalWrite(pinRF,LOW);
    digitalWrite(pinLB,HIGH);
    digitalWrite(pinLF,LOW);
}

void stop()
{
    digitalWrite(pinRB,HIGH);
    digitalWrite(pinRF,HIGH);
    digitalWrite(pinLB,HIGH);
    digitalWrite(pinLF,HIGH);
}
