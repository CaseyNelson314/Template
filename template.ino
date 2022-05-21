//可変長引数実験
#include "olib.h"

void setup() {
  Serial.begin(115200);
  Serial.println(std::maxmum<int>(3.0, 2, 10, 40));
}


void loop() {
}
