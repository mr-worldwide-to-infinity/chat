#ifndef Drive_H
#define Drive_H

#include <Arduino.h> 
#include <stdlib.h>

const int forwardPin = 3;
const int backwardsPin=2;
const int maxSpeed=255;
const int minSpeed=100;

void motorSetup();
bool driveForward(int speed);
bool driveBackwards(int speed);

#endif