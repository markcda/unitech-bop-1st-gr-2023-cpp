#include <iostream>
#include <cmath>

using namespace std;

int main() {
  for (float x = -1.7; x <= 6.101; x += 0.1) cout << x * exp(-x-3) << endl;
  return 0;
}
