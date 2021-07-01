#ifndef MOTORS_H
#define MOTORS_H

#include <Arduino.h>

static int pinLB = 6;
static int pinLF = 9;
static int pinRB = 10;
static int pinRF = 11;

void pins();
void forward();
void right();
void left();
void back();
void stop();

#endif