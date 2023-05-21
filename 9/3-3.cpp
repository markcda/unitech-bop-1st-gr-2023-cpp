#include <iostream>
#include <cmath>
#include <vector>
#include "matrix.hpp"

int fmin(matrix<float> A) {
  float min = A.m[0][0];
  for (int i = 0; i < A.m.size(); i++)
    for (int j = 0; j < A.m[0].size(); j++)
      if (A.m[i][j] < min) min = A.m[i][j];
  return min;
}

std::vector<float> calc(matrix<float> X) {
  std::vector<float> vec;
  for (int i = 0; i < X.m.size(); i++) {
    vec.push_back(X.m[0][i] * fmin(X));
  }
  return vec;
}

int main() {
  std::cout << "Введите n:" << std::endl;
  int n;
  std::cin >> n;
  std::cout << "Введите матрицу X (n x n):" << std::endl;
  std::string tmp; getline(std::cin, tmp);
  auto X = read_matrix<float>(n, n);
  if (!X.valid) return 1;
  auto v = calc(X);
  for (auto el : v) std::cout << el << std::endl;
  return 0;
}
