#ifndef CHASSIS_HPP
#define CHASSIS_HPP

#include <Arduino.h>
#include <PRIZM.h>
#include <math.h>

extern EXPANSION exc;

void setBodyDegree(double Bdegrees, double vel_x, double vel_y, double vel_turn);

#endif