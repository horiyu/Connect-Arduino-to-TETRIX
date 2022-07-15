#include <Arduino.h>
#include <PRIZM.h>
#include <math.h>

EXPANSION exc;

void setBodyDegree(double Bdegrees, double vel_x, double vel_y, double vel_turn){
    
    exc.setMotorSpeed(1,1,(sin((Bdegrees+(7*PI/4)))*vel_x+cos((Bdegrees+(7*PI/4)))*vel_y+vel_turn));
    exc.setMotorSpeed(1,2,(sin((Bdegrees+(5*PI/4)))*vel_x+cos((Bdegrees+(5*PI/4)))*vel_y+vel_turn));
    exc.setMotorSpeed(3,1,(sin((Bdegrees+(1*PI/4)))*vel_x+cos((Bdegrees+(1*PI/4)))*vel_y+vel_turn));
    exc.setMotorSpeed(3,2,(sin((Bdegrees+(3*PI/4)))*vel_x+cos((Bdegrees+(3*PI/4)))*vel_y+vel_turn));

}