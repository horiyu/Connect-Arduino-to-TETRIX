#include <Arduino.h>
#include <PRIZM.h>
#include "chassis.hpp"

PRIZM prizm;

void setup() {
  
  Serial.begin(9600);
  prizm.PrizmBegin();

}

void loop() {
  
  setBodyDegree(0, 692, 400, 0);
  delay(1000);

}