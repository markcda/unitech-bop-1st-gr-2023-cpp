#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float x = 1.16;
  float e = 0.0001;
  float s = 0, a = 0;
  int k = 0;
  do {
    int k_f = 1;
    for (int i = 2; i <= k; i++) k_f *= i;
    a = pow(-1, k)*powf(x, 2*k+1) / (k_f * (2*k + 1));
    s += a;
    k++;
  } while (a >= e);
  cout << s << endl;
  return 0;
}
