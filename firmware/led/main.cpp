#include <Arduino.h>

String tangHuLu[4] = {"strawberry", "grape", "manderin", "hawthorn"};

void setup() {
  Serial.begin(115200);
  for (int i = 0; i < 4; i++) {
    Serial.print("--");
    Serial.print(tangHuLu[i]);
  }
}

void loop() {}
