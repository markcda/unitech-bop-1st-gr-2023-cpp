#include <iostream>
#include <limits>
#include <cmath>

using namespace std;

int main() {
  float y = 0.7;
  float z;
  float minz = numeric_limits<float>::max();
  for (float x = -2.7; x <= 0.101; x += 0.2) {
    z = 1 / ((1 + x*x) - y*x);
    cout << x << "\t" << z << endl;
    if (z < minz) minz = z;
  }
  cout << "min z: " << minz << endl;
  return 0;
}
