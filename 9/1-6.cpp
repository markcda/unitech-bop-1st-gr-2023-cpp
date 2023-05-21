#include <iostream>
#include <cmath>

int main() {
  float x;
  int n;
  std::cout << "Введите x, n: ";
  std::cin >> x >> n;
  float sum = 0;
  for (int k = 1; k <= n; k++)
    sum += pow(-1, k) * powf(x, k) / pow(2*k + 1, k);
  std::cout << sum << std::endl;
  return 0;
}
