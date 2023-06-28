#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float a;
  cin >> a;
  float sum = 0;
  int n = 0;
  do {
    n++;
    sum += 1.0 / n;
  } while (sum <= a);
  cout << n << endl;
  return 0;
}
