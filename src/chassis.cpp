#include <Arduino.h>
#include <PRIZM.h>
#include <math.h>

EXPANSION exc;

void setBodyDegree(double Bdegrees, double vel, double yaw = 0, double vel_turn = 0){

    double vel_x = cos(Bdegrees) * vel;
    double vel_y = sin(Bdegrees) * vel;
    
    exc.setMotorSpeed(1, 1, -(cos((yaw+(7*PI/4))) * vel_x + sin((yaw+(7*PI/4))) * vel_y + vel_turn));
    exc.setMotorSpeed(1, 2, (cos((yaw+(5*PI/4))) * vel_x + sin((yaw+(5*PI/4))) * vel_y + vel_turn));
    exc.setMotorSpeed(3, 2, -(cos((yaw+(3*PI/4))) * vel_x + sin((yaw+(3*PI/4))) * vel_y + vel_turn));
    exc.setMotorSpeed(3, 1, (cos((yaw+(1*PI/4))) * vel_x + sin((yaw+(1*PI/4))) * vel_y + vel_turn));

    // Serial.println("=============================================");
    // Serial.println(vel_x);
    // Serial.println(vel_y);
    // Serial.println("---------------------------------------------");
    // Serial.println((cos((yaw+(1*PI/4))) * vel_x + sin((yaw+(1*PI/4))) * vel_y + vel_turn));
    // Serial.println((cos((yaw+(5*PI/4))) * vel_x + sin((yaw+(5*PI/4))) * vel_y + vel_turn));
    // Serial.println((cos((yaw+(7*PI/4))) * vel_x + sin((yaw+(7*PI/4))) * vel_y + vel_turn));
    // Serial.println((cos((yaw+(3*PI/4))) * vel_x + sin((yaw+(3*PI/4))) * vel_y + vel_turn));
    // Serial.println("=============================================");

}