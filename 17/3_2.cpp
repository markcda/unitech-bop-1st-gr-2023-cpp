#include <iostream>
#include <vector>
#include <limits>
#include "matrix.hpp"

using namespace std;

float scalar(matrix<float> M, int x, int y) {
  float s = 0;
  for (int i = 0; i < M.m.size(); i++) s += M.m[x][i] * M.m[i][y];
  return s;
}

void findmin(matrix<float> M, int &x, int &y) {
  float min = numeric_limits<float>::max();
  for (int i = 0; i < M.m.size(); i++) {
    for (int j = 0; j < M.m[0].size(); j++) {
      if (M.m[i][j] < min) {
        x = i;
        y = j;
        min = M.m[i][j];
      }
    }
  }
}

int main() {
  cout << "Input n:" << endl;
  int n;
  cin >> n;
  cout << "Input A:" << endl;
  string tmp; getline(cin, tmp);
  auto A = read_matrix<float>(n, n);
  if (!A.valid) return 1;
  int i, j;
  findmin(A, i, j);
  float y = scalar(A, i, j);
  return 0;
}
