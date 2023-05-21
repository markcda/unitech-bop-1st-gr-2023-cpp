#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

vector<float> get(int n) {
  vector<float> v;
  float tmp;
  for (int i = 0; i < n; i++) {
    cout << i+1 << ": ";
    cin >> tmp;
    v.push_back(tmp);
  }
  return v;
}

int main() {
  int n;
  cin >> n;
  auto a = get(n);
  float min = a[0];
  float curr;
  for (int i = 0; i < n; i++) {
    curr = pow(-1, i) * a[i];
    if (curr < min) min = curr;
  }
  cout << min << endl;
  return 0;
}
