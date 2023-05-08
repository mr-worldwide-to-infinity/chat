#include "Drive.h"

void motorSetup()
{
    pinMode(forwardPin, OUTPUT);
    pinMode(backwardsPin, OUTPUT);

    analogWrite(backwardsPin, 0);
    analogWrite(forwardPin, 0);
}

bool driveForward(int speed)
{
    if (speed < minSpeed && speed > maxSpeed)
        return false;

    analogWrite(backwardsPin, 0);
    analogWrite(forwardPin, speed);

    return true;
}

bool driveBackwards(int speed)
{
    if (speed < minSpeed && speed > maxSpeed)
        return false;

    analogWrite(forwardPin, 0);
    analogWrite(backwardsPin, speed);

    return true;
}
