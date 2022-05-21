

#pragma once

namespace std{

template<typename R = double, typename... T>
R maxmum(T... param) {
  R array[] = {static_cast<R>(param)...};
  R max = 0;
  for (R &i : array)max = (i > max) ? i : max;
  return max;
}

template<typename R = double, typename... T>
R minimum(T... param) {
  R array[] = {static_cast<R>(param)...};
  R min = 0;
  for (R &i : array)min = (i < min) ? i : min;
  return min;
}

//template<typename T>
//T maxmum(T val1, T val2) {
//  return val1 > val2 ? val1 : val2;
//}
  
}
