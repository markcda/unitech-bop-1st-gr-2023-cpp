#include <cmath>
#include <iostream>

using namespace std;

int main() {
  float x, y;
  float z = 0.2;
  float min = tan(-2.7)*tan(-2.7) - z*x;
  for (x = -2.7; x <= 3.1; x += 0.2) {
    y = tan(x)*tan(x) - z*x;
    cout << x << " " << y << endl;
    if (y < min) min = y;
  }
  cout << min << endl;
  return 0;
}
