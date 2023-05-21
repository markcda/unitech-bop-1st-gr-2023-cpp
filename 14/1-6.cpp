#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int k;
  float x = -9.122;
  float s = 0;
  int n = 1632; 
  for (k = 1; k < n; k++) {
    s += 1 + sin(k*x)/k;
  }
  cout << s << endl;
  return 0;
}
