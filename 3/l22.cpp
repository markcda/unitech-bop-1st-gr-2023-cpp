#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<float> b;
  for (int i = 1; i <= n; i++) {
    float sum = 0;
    for (int j = 1; j <= i; j++) sum += pow(-1, j+1) / j;
    b.push_back(sum);
  }
  for (const auto &el : b) cout << el << endl;
  return 0;
}
