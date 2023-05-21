#include <iostream>
#include <vector>

using namespace std;

int main() {
  int B[4][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12},
    {13, 14, 15, 16}
  };
  int sum = 0;
  int ind = 0;
  for (int j = 0; j < 4; j++) {
    int row_s = 0;
    for (int i = 0; i < 4; i++) {
      row_s += abs(B[i][j]);
    }
    if (row_s > sum) {
      sum = row_s;
      ind = j;
    }
  }
  int min = B[0][ind];
  for (int i = 0; i < 4; i++) {
    if (B[i][ind] < min) min = B[i][ind];
  }
  cout << min << endl;
  return 0;
}
