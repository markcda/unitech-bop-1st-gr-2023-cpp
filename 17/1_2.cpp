#include <iostream>
#include <cmath>

using namespace std;

int main() {
  for (double a = -0.8; a <= 6.81; a += 0.1) {
    cout << 2 * cos(a - M_PI/6) / (1.0/6 + sin(a)*sin(a)) << endl;
  }
  return 0;
}
