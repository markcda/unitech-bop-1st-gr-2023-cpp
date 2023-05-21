#include <iostream>

using namespace std;

int main() {
  float u1 = 0, u2 = 0;
  float v1 = 1, v2 = 1;
  float u, v;
  int n;
  cin >> n;
  int i = 3;
  do {
    u = (u2 - u1*v2 - v1) / (1 + u2*u2 + v2*v2);
    v = (u2 - v2) / (abs(u1 + v2));
    u1 = u2;
    v1 = v2;
    u2 = u;
    v2 = v;
  } while (i++ <= n);
  cout << u << endl << v << endl;
  return 0;
}
