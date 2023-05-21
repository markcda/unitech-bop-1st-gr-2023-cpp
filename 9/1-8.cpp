#include <iostream>
#include <cmath>

float y(float x, int k) {
  return 1 / (sqrt(std::abs(x)) + k*k);
}

int main() {
  float x;
  std::cout << "Введите x: ";
  std::cin >> x;
  float e = 0.001;
  float sum = y(x, 1);
  float prevsum = 0;
  for (int k = 2; std::abs(sum - prevsum) > e; k++) {
    prevsum = sum;
    sum += y(x, k);
  }
  std::cout << sum << std::endl;
  return 0;
}
