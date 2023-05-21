#include <iostream>
#include <cmath>

int main() {
  int n;
  std::cout << "Введите n: ";
  std::cin >> n;
  float res = 0;
  for (int k = 0; k < n; k++)
    res = 3 * (n - k) + sqrt(res);
  std::cout << res << std::endl;
  return 0;
}
