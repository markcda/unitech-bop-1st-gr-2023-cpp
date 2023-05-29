#include <iostream>

using namespace std;

int main() {
  float x, y;
  cin >> x >> y;
  if (x >= -2 and x <= -1 and y >= 0 and y <= 2) cout << "yes" << endl;
  else if (x >= -1 and x <= 0 and y >= 0 and y <= -2*x) cout << "yes" << endl;
  else cout << "no" << endl;
  return 0;
}
