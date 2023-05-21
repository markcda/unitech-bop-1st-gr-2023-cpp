#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float x = 0.1724;
  float e = 0.0001;
  float z = 0;
  float zp; int n = 1;
  do {
    zp = powf(x-1, n) / n / powf(x+1, n);
    n += 2;
    z += zp;
  } while (zp >= e);
  cout << z * 2 << endl;
  return 0;
}
