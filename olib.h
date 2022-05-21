#pragma once


template<typename R = double, typename... T>
R maxmum(T... param) {
  R array[] = {static_cast<R>(param)...}; //キャストして配列に変換
  R max = 0;
  for (R &i : array)max = (i > max) ? i : max; //最大値計算
  return max;
}


template<typename R = double, typename... T>
R minimum(T... param) {
  R array[] = {static_cast<R>(param)...};
  R min = array[0];
  for (R &i : array)min = (i < min) ? i : min;
  return min;
}


template<typename R = double, typename... T>
R sum(T... param) {
  R array[] = {static_cast<R>(param)...};
  R sum;
  for (R &i : array)sum += i;
  return sum;
}

//引数の数を求める(ポインタ×)
template<typename... T>
uint16_t countParam(T...param) {
  uint8_t array[] = {static_cast<uint8_t>(param)...};
  return sizeof(array);
}



//{}内に引数の値を入れたい！
//ex: print("値は{}です\n", 10); => 値は10です
template<typename... T>
void print(const String &str, T... param) {
  
  Serial.print(str);
  
}
