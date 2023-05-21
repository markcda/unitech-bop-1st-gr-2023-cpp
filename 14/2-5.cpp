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
  vector<float> b;
  for (int i = 0; i < n; i++) {
    float s = 0;
    for (int j = 0; j < n; j++) {
      s += powf(a[j], i + 1);
    }
    b.push_back(s);
    cout << b[i] << endl;
  }
  return 0;
}
