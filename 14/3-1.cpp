#include <iostream>
#include <vector>

using namespace std;

int main() {
  int A[4][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12},
    {13, 14, 15, 16}
  };
  int max = A[0][0];
  for (int i = 0; i < 4; i++) for (int j = 0; j < 4; j++) {
    if (A[i][j] > max) {
      max = A[i][j];
    }
  }
  for (int i = 0; i < 4; i++) for (int j = 0; j < 4; j++) {
    if (A[i][j] == max) cout << i << "\t" << j << endl;
  }
  return 0;
}
