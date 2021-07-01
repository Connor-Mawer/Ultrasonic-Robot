#ifndef RANGER_H
#define RANGER_H

#include <Arduino.h>
#include <Servo.h>
#include <motors.h>

Servo myservo;


long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurement
int FDistance;
int LDistance;
int RDistance;

int echoPin = A0;
int trigPin = A1;


void ranger_begin();

void Distance() ;
void Test_FDistance();

void Test_RDistance();

void Test_LDistance();

void Test_Turning_Direction();

#endif