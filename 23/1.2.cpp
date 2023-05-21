#include <iostream>
#include <cmath>
using namespace std;

int main() {
  for (float x = -1.9; x <= 1.91; x += 0.1)
    cout << (x*x - x) / (1 + powf(sin(x + .5), 2));
  return 0;
}
