#include <Arduino.h>
#include <PRIZM.h>

EXPANSION exc;

void setBodyDegree(double Bdegrees){
    exc.setMotorSpeed(1,1,500);
}
