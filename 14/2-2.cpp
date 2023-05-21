#include <vector>
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
  float a = 1.244;
  float b = -91.81823;
  vector<float> r;
  for (int i = 0; i <= n; i++) {
    r.push_back(a + i * (b-a)/n);
    cout << r[i] << endl;
  }
  return 0;
}
