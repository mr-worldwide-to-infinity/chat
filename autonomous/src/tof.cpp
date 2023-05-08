#include "Tof.h"
#include <Adafruit_VL53L0X.h>

void tofSetup()
{
    for (int i = 0; i < countOfSensoren; i++)
    {
        Adafruit_VL53L0X sensor[i] = Adafruit_VL53L0X();
        sensor[i].begin(0x31 + i);
        sensor[i].startRangeContinuous();
        sensorsWithAdress[i] = sensor[i];
    }
}

int tofReadSensor(sensor sensor)
{
    if (sensor == NULL)
        return -1;
    if (sensorsWithAdress[sensor].isRangeComplete())
        return sensorsWithAdress[sensor].readRange();
    return -1;
}
