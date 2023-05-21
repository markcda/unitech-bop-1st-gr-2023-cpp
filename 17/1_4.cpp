#include <iostream>
#include <cmath>

using namespace std;

double f(double x) {
  return 0.5*sqrt(abs(2*x + 1))*powf(x+2, 3);
}

int main() {
  double max = f(-1.2), y;
  for (double x = -1.2; x <= 1.21; x+=0.1) {
    y = f(x);
    if (y > max) max = y;
    cout << x << "\t" << y << endl;
  }
  cout << max << endl;
  return 0;
}
