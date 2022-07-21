#include <Arduino.h>
#include <PRIZM.h>
#include "chassis.hpp"

PRIZM prizm;

void setup() {
  
  Serial.begin(9600);
  prizm.PrizmBegin();

}

void loop() {
  
  setBodyDegree(1*PI/4, 500);
  delay(1000);

}