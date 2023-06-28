#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float x, e;
  cin >> x >> e;
  float sum = 0, curr;
  int k = 0;
  do {
    int fact2k = 1;
    for (int i = 2; i <= 2*k; i++) fact2k *= i;
    curr = pow(-1, k+1) * powf(x, 3*k) / fact2k;
    sum += curr;
    k++;
  } while (abs(curr) < e);
  cout << sum << endl;
  return 0;
}
