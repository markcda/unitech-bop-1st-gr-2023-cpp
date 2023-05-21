#include <iostream>

using namespace std;

int main() {
  double s = 0;
  double e = 0.0001;
  double sl = 0;
  int n = 1;
  do {
    sl = 1.0 / (n*(n+1));
    n++;
    s += sl;
  } while (sl >= e);
  cout << s << endl;
  cout << 1.0 - s << endl;
  return 0;
}
