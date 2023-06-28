#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float x;
  cin >> x;
  float prev, curr = x;
  do {
    prev = curr;
    curr = 3*prev + x*x / (4*prev);
  } while (abs(curr - prev) < 0.001);
  cout << curr << endl;
  return 0;
}
