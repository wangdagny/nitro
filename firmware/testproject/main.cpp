#include <Arduino.h>

String tanghulu[4] = {"stawberry", "hawthorn", "manderin", "grape"};

void setup() {
  Serial.begin(115200);
  for (int i = 0; i < 4; i = i + 1) {
    Serial.print(tanghulu[i]);
    Serial.print("__");
  }
}

void loop() {}
