#include <iostream>
using namespace std;

int main() {
  float x, y;
  cin >> x >> y;
  if (abs(x) >= 1 and abs(x) <= 2 and y >= 0 and y <= 2) cout << "Da" << endl;
  else if (abs(x) >= 0 and abs(x) <= 1 and y >= 0 and y <= x*x) cout << "Da" << endl;
  else cout << "Net" << endl;
  return 0;
}
