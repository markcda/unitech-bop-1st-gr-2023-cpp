#include <iostream>
#include <vector>

using namespace std;

float minline(float M[4][4], int whatline) {
  float min = M[whatline][0];
  for (int i = 0; i < 4; i++) if (min > M[whatline][i]) min = M[whatline][i];
  return min;
}

int selecth(float M[4][4]) {
  float max = -1000000;
  int n = -1;
  for (int i = 0; i < 4; i++) {
    float m = minline(M, i);
    if (m > max) {
      max = m;
      n = i;
    }
  }
  return n;
}

int main() {
  float C[4][4] = {
    {1.,  2.,  3.,  4.},
    {5.,  6.,  7.,  8.},
    {9.,  10., 11., 12.},
    {13., 14., 15., 16.}
  };
  cout << selecth(C) << endl;
  return 0;
}
