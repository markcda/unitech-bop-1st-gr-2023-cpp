#include <iostream>
#include <cmath>

int main() {
  std::cout << "Введите x: ";
  float x;
  std::cin >> x;
  for (float y = -5.6; y <= 1.81; y += 0.2)
    std::cout << y << "\t" << (3 + sin(y)) / (1 + x*x*std::abs(y - tan(y))) << std::endl;
  return 0;
}
