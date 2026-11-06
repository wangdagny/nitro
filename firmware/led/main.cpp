#include <Arduino.h>
#include <Servo.h>

// Servo motors[4];
// int motorPins[4] = {4, 5, 2, 3};
Servo motorTopLeft;
Servo motorBottomLeft;
Servo motorTopRight;
Servo motorBottomRight;

int motorTopLeftPin = 4;
int motorBottomLeftPin = 5;
int motorTopRightPin = 2;
int motorBottomRightPin = 3;

void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
  motorTopLeft.attach(motorTopLeftPin);
  motorBottomLeft.attach(motorBottomLeftPin);
  motorTopRight.attach(motorTopRightPin);
  motorBottomRight.attach(motorBottomRightPin);

  motorTopLeft.write(1660);
  motorBottomLeft.write(1660);
  motorTopRight.write(1300);
  motorBottomRight.write(1300);
}

void loop() {
  digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
  delay(1000);
}
