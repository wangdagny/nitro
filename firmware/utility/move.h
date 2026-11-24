#pragma once
#include <Arduino.h>
#include <Servo.h>

extern Servo motors[];

void move(float centerSpeed, float speedDifference) {
  motors[0].write(50 * centerSpeed + 1500);   // 1800
  motors[1].write(50 * centerSpeed + 1500);   // 1800
  motors[2].write(-50 * centerSpeed + 1500);  // 1200
  motors[3].write(-50 * centerSpeed + 1500);  // 1200
}
