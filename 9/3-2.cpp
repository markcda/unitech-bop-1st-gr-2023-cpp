#include <iostream>
#include <cmath>
#include <vector>
#include "matrix.hpp"

matrix<int> mul(matrix<int> A, matrix<int> B) {
  std::vector<std::vector<int>> m;
  int size = A.m.size();
  for (int i = 0; i < size; i++) {
    std::vector<int> line;
    for (int j = 0; j < size; j++) {
      line.push_back(A.m[i][j] * B.m[i][j]);
    }
    m.push_back(line);
  }
  return {m, true};
}

int fmax(matrix<int> A) {
  int max = A.m[0][0];
  for (int i = 0; i < A.m.size(); i++)
    for (int j = 0; j < A.m[0].size(); j++)
      if (A.m[i][j] > max) max = A.m[i][j];
  return max;
}

int main() {
  std::cout << "Введите n:" << std::endl;
  int n;
  std::cin >> n;
  std::cout << "Введите матрицу A (n x n):" << std::endl;
  std::string tmp; getline(std::cin, tmp);
  auto A = read_matrix<int>(n, n);
  if (!A.valid) return 1;
  std::cout << "Введите матрицу B (n x n):" << std::endl;
  auto B = read_matrix<int>(n, n);
  if (!B.valid) return 1;
  auto C = mul(A, B);
  float z = float(fmax(A)*fmax(B))/fmax(C);
  std::cout << z << std::endl;
  return 0;
}
