/**
 * @file   Template.h
 * @author CaseyNelson
 * @date   2022-05-27
 */

#pragma once

/**
 * @brief       最大値を求める
 * @tparam R    戻り値の型
 * @tparam T    自動
 * @param param 最大値を求める値
 * @return R    最大値
 */
template <typename R = double, typename... T>
R maxmum(T... param) {
  R array[] = {static_cast<R>(param)...};  //キャストして配列に変換
  R max = 0;
  for (const R &i : array) max = (i > max) ? i : max;  //最大値算出
  return max;
}

/**
 * @brief       最小値を求める
 * @tparam R    戻り値の型
 * @tparam T    自動
 * @param param 最小値を求める値
 * @return R    最小値
 */
template <typename R = double, typename... T>
R minimum(T... param) {
  R array[] = {static_cast<R>(param)...};
  R min = array[0];
  for (const R &i : array) min = (i < min) ? i : min;  //最小値算出
  return min;
}


/**
 * @brief       合計値を返す
 * @tparam R    戻り値の型
 * @tparam T    自動
 * @param param 合計する値
 * @return R    合計
 */
template <typename R = double, typename... T>
R sum(T... param) {
  R array[] = {static_cast<R>(param)...};
  R sum;
  for (const R &i : array) sum += i;
  return sum;
}

/**
 * @brief  引数の個数を求める
 * @tparam 自動
 * @param  調べる引数
 * @return 引数個数
 */
template <typename... T>
uint16_t countParam(T... param) {
  return sizeof...(param);
}

/**
 * @brief hoge??
 * {}内に引数の値を入れたい！
 * ex: print("値は{}です\n", 10); => 値は10です
 */
template <typename... T>
void print(const String &str, T... param) {
  //  for (uint8_t i = 0; i < sizeof...(param); i++)
  //    Serial.print(param... + i);
}
