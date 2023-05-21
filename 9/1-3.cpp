#include <iostream>
#include <cmath>

int main() {
  float a, b, c;
  std::cout << "Введите a, b, c: ";
  std::cin >> a >> b >> c;
  if (a == 0.0) a = 0.1;
  if (b*b - 4*a*c < 0) {
    std::cout << "Действительных корней нет." << std::endl;
    return 1;
  }
  float sq = sqrt(b*b - 4*a*c);
  float x1 = (-b + sq) / (2*a);
  float x2 = (-b - sq) / (2*a);
  std::cout << "Корни: " << x1 << " и " << x2 << std::endl;
  return 0;
}
