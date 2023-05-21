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
  auto a = get(n);
  int p = 0;
  for (int i = 0; i < n; i++) if (a[i] > 0) { p = i; break; }
  for (int i = p; i < n; i++) {
    a[i] -= 0.5;
    cout << a[i] << endl;
  }
  return 0;
}
