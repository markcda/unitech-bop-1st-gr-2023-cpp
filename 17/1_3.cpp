#include <iostream>

using namespace std;

bool gr(double smth, double a, double b) {
  if (smth >= a && smth >= b) return true;
  else return false;
}

int main() {
  double x, y, z;
  cin >> x >> y >> z;
  double a = x+y, b = z, c = x*y*z;
  if (gr(a, b, c)) cout << a << endl;
  else if (gr(b, a, c)) cout << b << endl;
  else if (gr(c, a, b)) cout << c << endl;
  return 0;
}
