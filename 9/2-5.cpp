#include <iostream>
#include <cmath>
#include <limits>
#include <vector>

int main() {
  float sum = 0, max = std::numeric_limits<float>::min();
  float n;
  std::cout << "Введите n: ";
  std::cin >> n;
  float res;
  for (int k = 1; k <= n; k++) {
    res = k * exp(powf(sin(k+1), 2));
    sum += res;
    if (res > max) max = res;
  }
  std::cout << "Сумма чисел равна " << sum << std::endl;
  std::cout << "Наибольшее равно " << max << std::endl;
  return 0;
}
