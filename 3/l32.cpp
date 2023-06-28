#include <iostream>
#include <cmath>

using namespace std;

int fact(int n) {
  int f = 1;
  for (int i = 2; i <= n; i++) f *= i;
  return f;
}

float sum(int start, int end, float x) {
  float s = 0;
  for (int k = start; k <= end; k++) s += powf(x, 2*k + 1) / fact(2*k + 1);
  return s;
}

float t(float x) {
  return sum(0, 10, x);
}

float z(float y) {
  return (1.7*t(0.25) + 2*t(1 + y)) / (6 - t(y*y - 1));
}

int main() {
  float y;
  cin >> y;
  cout << z(y) << endl;
  return 0;
}
