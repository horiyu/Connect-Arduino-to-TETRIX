#include <Arduino.h>
#include <PRIZM.h>
#include <math.h>

EXPANSION exc;

void setBodyDegree(double Bdegrees, double vel_x, double vel_y, double vel_turn){

    exc.setMotorSpeed(1,1,cos((Bdegrees+(3/4))*PI)*vel_x+sin((Bdegrees+(3/4))*PI)*vel_y+vel_turn);
    exc.setMotorSpeed(1,2,cos((Bdegrees+(5/4))*PI)*vel_x+sin((Bdegrees+(5/4))*PI)*vel_y+vel_turn);
    exc.setMotorSpeed(3,1,cos((Bdegrees+(1/4))*PI)*vel_x+sin((Bdegrees+(1/4))*PI)*vel_y+vel_turn);
    exc.setMotorSpeed(3,2,cos((Bdegrees+(7/4))*PI)*vel_x+sin((Bdegrees+(7/4))*PI)*vel_y+vel_turn);

}