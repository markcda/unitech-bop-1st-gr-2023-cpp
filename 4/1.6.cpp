#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n;
  cin >> n;
  float sum = 0;
  for (int k = 1; k <= n; k++) sum += 1.0 / pow(2*k, 2);
  cout << sum << endl;
  return 0;
}
