#ifndef Tof_H
#define Tof_H

#include <Arduino.h>
#include <Adafruit_VL53L0X.h>
#include <stdlib.h>

const int countOfSensoren=10;
Adafruit_VL53L0X sensorsWithAdress[countOfSensoren];

typedef enum 
{
    Front,
    Rear,
    Front_Left,
    Rear_Left,
    Rear_Right,
    Front_Right,
    Front_Left_Corner,
    Rear_Left_Corner,
    Rear_Right_Corner,
    Front_Right_Corner
}sensor;

typedef struct 
{
    sensor sensor;
    int distanceInMillimeter;
}distances;


void tofSetup();
int tofReadSensor(sensor sensor);
bool tofReadSensors(distances *distances);

#endif