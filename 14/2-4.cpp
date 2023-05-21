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
  float prev = a[0]-1;
  for (auto x : a) {
    if (x <= prev) {
      cout << "no" << endl;
      return 0;
    } else prev = x;
  }
  float curr;
  for (int i = 0; i < n; i++) {
    curr = (i + 2) * a[i];
    if (curr <= prev) {
      cout << "no" << endl;
      return 0;
    } else prev = curr;
  }
  cout << "yes" << endl;
  return 0;
}
