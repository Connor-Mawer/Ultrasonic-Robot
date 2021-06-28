#include <Arduino.h>
#include <Ranger.cpp>

int pinLB=6;
int pinLF=9;
int pinRB=10;
int pinRF=11;

void setup()
{
    pinMode(pinLB, OUTPUT);
    pinMode(pinLF, OUTPUT);
    pinMode(pinRB, OUTPUT);
    pinMode(pinRF, OUTPUT);
    delay(250)
}

void forward()
{
    digitalWrite(pinRB,LOW);
    digitalWrite(pinRF,HIGH);
    digitalWrite(pinLB,LOW);
    digitalWrite(pinLF,HIGH); 
    delay(250)
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

void loop ()
{
    Test_Moving_Distance()
    delay(250);

}