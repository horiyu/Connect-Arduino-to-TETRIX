#ifndef CHASSIS_HPP
#define CHASSIS_HPP

#include <Arduino.h>
#include <PRIZM.h>
#include <math.h>

extern EXPANSION exc;

void setBodyDegree(double Bdegrees, double vel, double yaw = 0, double vel_turn = 0);

#endif