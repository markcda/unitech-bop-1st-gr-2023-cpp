#include <iostream>
#include <cmath>
#include <vector>
#include "matrix.hpp"

int main() {
  std::cout << "Введите n:" << std::endl;
  int n;
  std::cin >> n;
  std::cout << "Введите матрицу A (n x n):" << std::endl;
  std::string tmp; getline(std::cin, tmp);
  auto A = read_matrix<float>(n, n);
  if (!A.valid) return 1;
  float max = A.m[0][0];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (j > i && i <= n/2) continue;
      else if (j > n - 1 - i && i >= n/2 + n%2) continue;
      if (A.m[i][j] > max) max = A.m[i][j];
    }
  }
  std::cout << max << std::endl;
  return 0;
}
