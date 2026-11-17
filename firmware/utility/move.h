#pragma once
#include <Arduino.h>
#include <Servo.h>

extern Servo motors[];

void move(float centerSpeed, float speedDifference) {
  motors[0].write(centerSpeed * 276.7f);
  motors[1].write(centerSpeed * 276.7f);
  motors[2].write(centerSpeed * 216.7f);
  motors[3].write(centerSpeed * 216.7f);
}
