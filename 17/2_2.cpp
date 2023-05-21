#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
  int n;
  cout << "Input n: ";
  cin >> n;
  vector<float> y;
  float x;
  for (int i = 0; i <= n; i++) {
    x = 1 + 0.1*i;
    y.push_back((x*x-3*x+2)/(sqrt(2*x*x*x-1)));
    cout << y[i] << endl;
  }
  return 0;
}
