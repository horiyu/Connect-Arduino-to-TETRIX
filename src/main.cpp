#include <Arduino.h>
#include <PRIZM.h>
#include "chassis.hpp"
#include "path.hpp"

PRIZM prizm;

void setup() {
  
  // Serial.begin(9600);
  prizm.PrizmBegin();

}

void loop() {

  // struct point
  // {
  //     int x;
  //     int y;
  // };


  // struct point points[4];

  // points[0].x = 0;
  // points[0].y = 0;

  // points[1].x = 2;
  // points[1].y = 2;

  // points[2].x = 3;
  // points[2].y = 5;
  
  // points[3].x = 4;
  // points[3].y = 0;
  

  // double distances[6];

  // distances[0] = distance(points[0].x, points[0].y, points[1].x, points[1].y);
  // distances[1] = distance(points[0].x, points[0].y, points[2].x, points[2].y);
  // distances[2] = distance(points[0].x, points[0].y, points[3].x, points[3].y);
  // distances[3] = distance(points[1].x, points[1].y, points[2].x, points[2].y);
  // distances[4] = distance(points[1].x, points[1].y, points[3].x, points[3].y);
  // distances[5] = distance(points[2].x, points[2].y, points[3].x, points[3].y);
  
  // for (size_t i = 0; i < 6; i++)
  // {
  //   Serial.println(distances[i]);
  // }
  // Serial.println("============");
  
  setBodyDegree(PI, 1700, 0, 0);
  delay(2300);
  setBodyDegree(0, 0, 0, 0);
  delay(5000);
  setBodyDegree(0.875+PI, 1700, 0, 0);
  delay(3600);
  setBodyDegree(0, 0, 0, 0);
  delay(5000);
  setBodyDegree(0.5, 1700, 0, -10);
  delay(7600);
  setBodyDegree(0, 0, 0, 0);
  delay(5000);
  setBodyDegree(PI-0.67, 1700, 0, -20);
  delay(4750);
  setBodyDegree(0, 0, 0, 0);
  delay(500);
  setBodyDegree(0, 0, 0, -100);
  delay(1000);
  setBodyDegree(0, 0, 0, 0);
  delay(500);
  while (1)
  {
    delay(10000);
  }
  

}