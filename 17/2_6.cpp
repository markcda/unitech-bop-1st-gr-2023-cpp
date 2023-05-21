#include <iostream>
#include <vector>

using namespace std;

vector<float> read_line(int n) {
  cout << "Input " << n << " numbers." << endl;
  vector<float> v;
  float tmp;
  for (int i = 0; i < n; i++) {
    cout << "Input num: ";
    cin >> tmp;
    v.push_back(tmp);
  }
  return v;
}

int main() {
  int n;
  cout << "Input n: ";
  cin >> n;
  vector<float> a = read_line(n);
  vector<float> b;
  for (auto x : a) if (x >= 0) b.push_back(x);
  for (auto x : a) if (x < 0) b.push_back(x);
  for (auto x : b) cout << x << endl;
  return 0;
}
