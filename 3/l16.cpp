#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n;
  cin >> n;
  float sum = 0;
  for (int k = 1; k <= n; k++) {
    float factk = 1;
    for (int i = 2; i <= k; i++) factk *= i;
    sum += factk / pow(k, 5);
  }
  cout << sum << endl;
  return 0;
}
