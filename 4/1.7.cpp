#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float x;
  cin >> x;
  float eps;
  cin >> eps;
  float a = x, a1;
  int n = 1;
  do {
    n++;
    a1 = a;
    a = 3 + 1.0/pow(3, n)*sin(a1 - x);
  } while (abs(a - a1) >= eps);
  cout << a << endl;
  return 0;
}
