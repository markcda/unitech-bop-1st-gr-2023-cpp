#include <iostream>
#include <vector>
#include "matrix.hpp"
using namespace std;

vector<float> getmax(const vector<vector<float>> &M) {
  vector<float> g;
  for (int i = 0; i < M.size(); i++) {
    float max = M[i][0];
    for (int j = 0; j < M.size(); j++) if (M[i][j] > max) max = M[i][j];
    g.push_back(max);
  }
  return g;
}

vector<float> getmin(const vector<vector<float>> &M) {
  vector<float> g;
  for (int i = 0; i < M.size(); i++) {
    float min = M[0][i];
    for (int j = 0; j < M.size(); j++) if (M[j][i] < min) min = M[j][i];
    g.push_back(min);
  }
  return g;
}

int main() {
  int n;
  cin >> n;
  cout << "Input matrix." << endl;
  matrix<float> A = read_matrix<float>(n, n);
  vector<float> x = getmax(A.m), y = getmin(A.m);
  float t = 0;
  for (int i = 0; i < n; i++) t += x[i]*y[i];
  cout << t << endl;
  return 0;
}
