#include <Arduino.h>
#include <Servo.h>

#include "../utility/move.h"

Servo motors[4];
int motorPins[4] = {4, 5, 2, 3};

void setup() {
  Serial.begin(115200);
  for (int i = 0; i < 4; i = i + 1) {
    motors[i].attach(motorPins[i]);
  }
  move(6.0f, 0.0f);
}

void loop() {}
