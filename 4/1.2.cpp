#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float y;
  cin >> y;
  for (float x = 0.8; x <= 3.401; x += 0.1) {
    cout << powf(y-x, 2)/2 + powf(abs(y-x), 3)/3 << endl;
  }
  return 0;
}
