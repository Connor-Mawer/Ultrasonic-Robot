#include <Arduino.h>
#include <Ranger.h>

long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurement
int FDistance;
int LDistance;
int RDistance;

void setup() 
  {
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  Serial.begin(9600); 
  }

void Distance() 
  {

    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance = duration * 0.34 / 2; //Ive converted it to mm by adjusting 0.034 x 10 to 0.34
  }

void Test_FDistance()
  {
    myservo.write(90); // This is an angle 
    delayMicroseconds(30000);
    Distance();
    distance = FDistance;
  }


void Test_RDistance()
  {
    myservo.write(177);
    delayMicroseconds(30000);
    Distance();
    distance = RDistance;
  }


void Test_LDistance()
  {
    myservo.write(5); // This is an angle 
    delayMicroseconds(30000);
    Distance();
    distance = LDistance;
  }