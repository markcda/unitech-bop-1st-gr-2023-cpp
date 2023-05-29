#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float a;
  cin >> a;
  if (a <= 0) cout << 0 << endl;
  else if (a > 0 and a <= 1) cout << a << endl;
  else cout << powf(a, 3) << endl;
  return 0;
}
