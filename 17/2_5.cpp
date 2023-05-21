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
  float max = a[0];
  for (auto x : a) if (x > max) max = x;
  for (int i = 0; i < n; i++) {
    if (abs(a[i]) != max) a[i] = 0;
    else a[i] = 1;
    cout << a[i] << endl;
  }
  return 0;
}
