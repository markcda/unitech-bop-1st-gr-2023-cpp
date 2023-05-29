#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float x, eps;
  cin >> x >> eps;
  float sum = 0;
  float curr = 0;
  int k = 0;
  do {
    sum += curr;
    float f = 1;
    for (int i = 2; i <= k; i++) f *= i;
    curr = pow(-1, k)*powf(x, 2*k+1) / (f * f * (k+1));
  } while (abs(curr) >= eps);
  sum += curr;
  cout << sum << endl;
  return 0;
}
