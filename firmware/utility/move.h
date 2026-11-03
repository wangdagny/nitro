#pragma once
#include <Arduino.h>
#include <Servo.h>

extern Servo motors[];

void move(int centerSpeed, int speedDifference) {
  int leftSpeedCmPerSecond = centerSpeed + (speedDifference / 2);
  int rightSpeedCmPerSecond = centerSpeed - (speedDifference / 2);

  int leftPulseOffset = 75.23 * leftSpeedCmPerSecond - 70.43;
  int rightPulseOffset = 75.23 * rightSpeedCmPerSecond - 70.43;

  motors[0].write(1470 + leftPulseOffset);
  motors[1].write(1470 + leftPulseOffset);
  motors[2].write(1480 - rightPulseOffset);
  motors[3].write(1480 - rightPulseOffset);
}