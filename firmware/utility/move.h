#pragma once
#include <Arduino.h>
#include <Servo.h>

extern Servo motors[];

void move(int centerSpeed, int speedDifference) {
  motors[0].write(1660);
  motors[1].write(1660);
  motors[2].write(1300);
  motors[3].write(1300);
}
