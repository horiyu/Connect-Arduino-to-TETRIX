#include <Arduino.h>
#include <PRIZM.h>
#include "chassis.hpp"

PRIZM prizm;
EXPANSION exc;

void setup() {
  
  prizm.PrizmBegin();
  exc.setServoSpeeds(2,25,25,25,25,25,25);

}

void loop() {

  exc.setMotorSpeed(1,1,500);
  exc.setMotorSpeed(1,2,500);
  exc.setMotorSpeed(3,1,-500);
  exc.setMotorSpeed(3,2,-500);
  delay(1000);
  exc.setMotorSpeed(1,1,500);
  exc.setMotorSpeed(1,2,-500);
  exc.setMotorSpeed(3,1,500);
  exc.setMotorSpeed(3,2,-500);
  delay(1000);
  exc.setMotorSpeed(1,1,-500);
  exc.setMotorSpeed(1,2,-500);
  exc.setMotorSpeed(3,1,500);
  exc.setMotorSpeed(3,2,500);
  delay(1000);
  exc.setMotorSpeed(1,1,-500);
  exc.setMotorSpeed(1,2,500);
  exc.setMotorSpeed(3,1,-500);
  exc.setMotorSpeed(3,2,500);
  delay(1000);

}
