#include <iostream>

using namespace std;

int main() {
  float p = 1;
  int n = 7;
  for (int i = 1; i <= n; i++) {
    float fact = 1;
    for (int j = 2; j <= i; j++) fact *= j;
    p *= fact / (i*i + 2*i + 3);
  }
  cout << p << endl;
  return 0;
}
