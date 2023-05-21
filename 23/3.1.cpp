#include <iostream>
#include <vector>
#include "matrix.hpp"
using namespace std;

int main() {
  int m;
  cin >> m;
  cout << "Input matrix." << endl;
  matrix<int> A = read_matrix<int>(m, m);
  vector<int> b;
  for (int i = 0; i < m; i++) {
    int p = 1;
    for (int j = 0; j < m; j++) if (A.m[j][i] > 1 and A.m[j][i] <= m) p *= A.m[j][i];
    b.push_back(p);
    cout << p << endl;
  }
  return 0;
}
