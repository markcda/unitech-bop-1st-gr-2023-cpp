#include <iostream>
#include <vector>
#include "matrix.hpp"
using namespace std;

void sort(matrix<float> &C) {
  for (int i = 0; i < C.m.size(); i++)
    for (int j = i; j < C.m.size(); j++) {
      if (C.m[i][0] > C.m[j][0]) swap(C.m[i], C.m[j]);
    }
}

int main() {
  int n, m;
  cin >> n >> m;
  cout << "Input matrix." << endl;
  matrix<float> C = read_matrix<float>(n, m);
  sort(C);
  return 0;
}
