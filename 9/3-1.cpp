#include <iostream>
#include <cmath>
#include <vector>
#include "matrix.hpp"

int main() {
  std::cout << "Введите m:" << std::endl;
  int m;
  std::cin >> m;
  std::cout << "Введите m чисел через пробел:" << std::endl;
  std::string tmp; getline(std::cin, tmp);
  auto a = read_line<int>();
  if (a.size() != m) return 1;
  std::cout << "Введите матрицу A (m x m):" << std::endl;
  auto A = read_matrix<int>(m, m);
  if (!A.valid) return 1;
  int s = 0;
  for (int i = 0; i < m; i++) {
    if (a[i] > 0) for (int j = 0; j < m; j++) s += A.m[i][j];
  }
  std::cout << s << std::endl;
  return 0;
}
