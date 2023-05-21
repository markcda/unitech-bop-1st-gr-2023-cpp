#include <iostream>
#include <cmath>
#include <vector>

std::vector<float> read() {
  std::cout << "Введите n: ";
  int n;
  std::cin >> n;
  std::vector<float> v;
  float tmp;
  for (int i = 0; i < n; i++) {
    std::cout << "Введите n<" << i << ">: ";
    std::cin >> tmp;
    v.push_back(tmp);
  }
  return v;
}

int main() {
  std::vector<float> a = read();
  float asr = 0;
  for (float ai : a) asr += ai;
  asr /= 15;
  std::cout << asr << std::endl;
  float S = 0;
  for (float ai : a) S += powf(ai - asr, 2);
  S /= 14;
  S = sqrt(S);
  std::cout << S << std::endl;
  return 0;
}
