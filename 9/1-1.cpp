#include <iostream>

int main() {
  std::cout << "Введите x и y: ";
  float x, y;
  std::cin >> x >> y;
  if (std::abs(x) >= 0 and std::abs(x) <= 1 and std::abs(y) >= 0 and std::abs(y) <= 1) std::cout << "true" << std::endl;
  else std::cout << "false" << std::endl;
  return 0;
}
