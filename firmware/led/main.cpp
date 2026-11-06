#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.println("setup");
}

void loop() {
  Serial.println("loop");
  digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
  delay(1000);
}
