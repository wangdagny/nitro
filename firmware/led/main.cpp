#include <Arduino.h>
#include <Servo.h>

Servo motors[4];
int motorPins[4] = {4, 5, 2, 3};

void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
  motors[0].attach(motorPins[0]);
  motors[1].attach(motorPins[1]);
  motors[2].attach(motorPins[2]);
  motors[3].attach(motorPins[3]);

  motors[0].write(1660);
  motors[1].write(1660);
  motors[2].write(1300);
  motors[3].write(1300);
}

void loop() {
  digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
  delay(1000);
}
