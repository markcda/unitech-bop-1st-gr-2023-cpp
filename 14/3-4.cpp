#include <iostream>
#include <vector>

using namespace std;

int main() {
  int a[9] = {1, 7, 21, 39, 22, 15, 16};
  int min = a[0], max = a[0];
  for (int i = 0; i < 9; i++) {
    if (a[i] < min) min = a[i];
    if (a[i] > max) max = a[i];
  }
  for (int i = min; i <= max; i++) {
    bool valid = true;
    for (int j = 0; j < 9; j++)
      if (a[j] == i) { valid = false; break; }
    if (valid) cout << i << endl;
  }
  return 0;
}
