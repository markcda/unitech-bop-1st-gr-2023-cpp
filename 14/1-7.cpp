#include <iostream>

using namespace std;

int main() {
  const float e = 0.0001;
  float xp;
  float xc = 1;
  do {
    xp = xc;
    xc = (2 - xp)/3;
  } while (abs(xc-xp)>=e);
  cout << xc << endl;
  return 0;
}
