//可変長引数実験
#include "Template.h"


template<typename... T>
void hoge(T... param) {
  Serial.println(countParam(param...));
}

void setup() {
  Serial.begin(115200);
  //  Serial.println(maxmum<int>(3.0, 2, 10, 40));
  //  Serial.println(minimum(3.0, 2, 10, 40));
  //  Serial.println(minimum<long>(3.0, 2, 10, 40));
  //  Serial.println(sum<long>(3.0, 2, 10, 40));
  //  hoge(1, 2, 2122.2, 0.5f);
  print("hoge{}{}{}", 2, 2122.2, 0.5f);
}

void loop() {
}
