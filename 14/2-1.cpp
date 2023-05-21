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
  auto a = get(2*n);
  for (int i = 0; i < n; i++) cout << a[i] << endl << a[n+i] << endl;
  return 0;
}
