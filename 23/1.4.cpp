#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

int main() {
  float min = numeric_limits<float>::max();
  float y = 0;
  for (float x = -3.5; x < 3.6; x+=0.2) {
    y = M_PI/6*cos(abs(x))+sin(3*x);
    if (y < min) min = y;
    cout << x << "   " << y << endl;
  }
  cout << min << endl;
  return 0;
}
