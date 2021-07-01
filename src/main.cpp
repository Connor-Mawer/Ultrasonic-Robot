#include <Arduino.h>

#include <Servo.h>

Servo myservo;


long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurement
int FDistance;
int LDistance;
int RDistance;

int echoPin = A0;
int trigPin = A1;

int pinLB=6;
int pinLF=9;
int pinRB=10;
int pinRF=11;

void setup()
{
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  Serial.begin(9600); 
  myservo.attach(5);
}

void loop()
{
  Test_FDistance();
  if (FDistance > 20);
  {
    forward();
  }

  else
  {
    Test_Turning_Direction();
  }
}