#pragma once


template<typename R = double, typename... T>
R maxmum(T... param) {
  R array[] = {static_cast<R>(param)...}; //キャストして配列に変換
  R max = 0;
  for (const R &i : array)
    max = (i > max) ? i : max;  //最大値算出
  return max;
}


template<typename R = double, typename... T>
R minimum(T... param) {
  R array[] = {static_cast<R>(param)...};
  R min = array[0];
  for (const R &i : array)
    min = (i < min) ? i : min;  //最小値算出
  return min;
}


template<typename R = double, typename... T>
R sum(T... param) {
  R array[] = {static_cast<R>(param)...};
  R sum;
  for (const R &i : array)sum += i;
  return sum;
}

template<typename... T>
uint16_t countParam(T...param) {
  return sizeof...(param);
}

//{}内に引数の値を入れたい！
//ex: print("値は{}です\n", 10); => 値は10です
template<typename... T>
void print(const String &str, T... param) {

  //  for (uint8_t i = 0; i < sizeof...(param); i++)
  //    Serial.print(param... + i);

}
