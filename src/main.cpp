#include <Arduino.h>
#include <PRIZM.h>
#include "chassis.hpp"

PRIZM prizm;

void setup() {
  
  prizm.PrizmBegin();
  // exc.setServoSpeeds(2,25,25,25,25,25,25);

}

void loop() {
  
  setBodyDegree(1/4, 500, 500, 0);
  delay(1000);

}