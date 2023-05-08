#include <Arduino.h>
#include <Servo.h>
#include <SPI.h>
#include <Adafruit_VL53L0X.h>
#include "Drive.h"
#include "tof.h"
Servo steering;



// Adafruit_VL53L0X lox = Adafruit_VL53L0X();
void setup(){
Serial.begin(9600);
steering.attach(8);
motorSetup();
tofSetup();


// lox.begin(0x32);
// lox.startRangeContinuous();

}

void loop()
{
  driveForward(200);
  steering.write(80);
   Serial.println(tofReadSensor(Rear));
  // if (lox.isRangeComplete())
  // {
  //   Serial.print("Distance in mm: ");
  //   Serial.println(lox.readRange());
  // }
}