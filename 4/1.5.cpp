#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n;
  cin >> n;
  float sum = 0;
  for (int i = 1; i <= n; i++) {
    float f = 1;
    for (int j = 2; j <= i + 1; j++) f *= j;
    sum += powf(2.0, i) / f;
  }
  cout << sum << endl;
  return 0;
}
