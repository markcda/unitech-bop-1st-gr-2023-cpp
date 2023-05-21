#include <iostream>
#include <vector>
#include "matrix.hpp"

using namespace std;

float s(matrix<float> M, int j) {
  float sum = 0;
  for (int i = 0; i < M.m.size(); i++) sum += abs(M.m[i][j]);
  return sum;
}

int main() {
  cout << "Input n:" << endl;
  int n;
  cin >> n;
  cout << "Input A:" << endl;
  string tmp; getline(cin, tmp);
  auto A = read_matrix<float>(n, n);
  if (!A.valid) return 1;
  float norma = s(A, 0);
  for (int i = 1; i < n; i++) {
    float sn = s(A, i);
    if (sn > norma) norma = sn;
  }
  cout << norma << endl;
  return 0;
}
