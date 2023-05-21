#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n = 100;
  float x;
  cout << "Vvedite x: ";
  cin >> x;
  float m = 1.0;
  for (int k = 1; k < n; k++) m *= float(k)/(k+1) - powf(cos(abs(x)), k);
  cout << m << endl;
  return 0;
}
