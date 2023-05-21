#include <iostream>

using namespace std;

int main() {
  float x, y;
  cin >> x >> y;
  if (abs(x) >= 3 and abs(y) >= 3) cout << 'y' << endl;
  else cout << 'n' << endl;
  return 0;
}
