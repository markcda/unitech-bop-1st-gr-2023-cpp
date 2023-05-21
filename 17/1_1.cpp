#include <iostream>

using namespace std;

int main() {
  double x, y;
  cin >> x >> y;
  if (y >= 0 and y <= 4 and y >= x*x) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
