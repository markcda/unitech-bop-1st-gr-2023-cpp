#include <iostream>

using namespace std;

int main() {
  float x, y;
  cin >> x >> y;
  if (x*x + y*y <= 1 and not (x > 0 and y < 0)) cout << "yes" << endl;
  else cout << "no" << endl;
  return 0;
}
