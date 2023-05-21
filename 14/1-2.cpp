#include <cmath>
#include <iostream>

using namespace std;

int main() {
  float b = 0.0;
  float x;
  for (x = 3.2; x <= 6.7; x += 0.2) {
    b = (1 + cos(x-2))/(x*x*x*x/2 + sin(x));
    cout << b << endl;
  }
  return 0;
}
