#include <cmath>
#include <iostream>

using namespace std;

int main() {
  const float e = 0.0001;
  float x = -24.7213;
  float g;
  float s = 0;
  int k = 1;
  do {
    g = sqrt(abs(x))/pow(k++,3);
    s += g;
  } while (g >= e);
  cout << s << endl;
  return 0;
}
