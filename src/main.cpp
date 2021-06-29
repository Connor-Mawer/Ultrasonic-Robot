#include <Arduino.h>
#include <Ranger.h>
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
void Distance() 
  {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance = duration * 0.034 / 2; // in cm 
  }

void Test_FDistance()
  {
    myservo.write(90); // This is an angle 
    delay(500);
    Distance();
    distance = FDistance;
    delay(500);
  }


void Test_RDistance()
  {
    myservo.write(177);
    delay(500);
    Distance();
    distance = RDistance;
    delay(500);
  }


void Test_LDistance()
  {
    myservo.write(5); // This is an angle 
    delay(500);
    Distance();
    distance = LDistance;
    delay(500);
  }

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

void Test_Moving_Distance()
{
    Test_FDistance();
    delay(500);

    Test_RDistance();
    delay(500);

    Test_LDistance();
    delay(500);

    Test_RDistance();
    delay(500);

  if (FDistance > 10)
  {
    forward();
  }
    
  if (LDistance > RDistance)
  { 
    left();
  }

  if (RDistance > LDistance)
  { 
    right();
  }

   else 
  {
    back();
  }

}

void loop()
{
  forward();
  Test_Moving_Distance();
}