#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int bz = 0, lz = 0;
  const float x = -1.7;
  float z;
  for (float y = -0.5; y <= 0.501; y += 0.1) {
    z = (1.2 - 9.8*x) / sqrt(abs(1 - y*y));
    if (z > 0) bz++;
    if (z < 0) lz++;
    cout << y << "\t" << z << endl;
  }
  cout << bz << endl;
  cout << lz << endl;
  return 0;
}
