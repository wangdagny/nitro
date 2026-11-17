#include <Arduino.h>

String tangHuLu[5] = {"strawberry", "grape", "manderin", "hawthorn", "😄"};

void setup() {
  Serial.begin(115200);
  for (int i = 0; i < 5; i = i + 1) {
    if (i > 0 && i < 4) {
      Serial.print("--");
      Serial.print(tangHuLu[i]);
    }
  }
}

void loop() {}
