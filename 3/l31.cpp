#include <iostream>
#include <limits>
#include <sstream>
#include <cmath>
#include <vector>

using namespace std;

template<typename num> vector<num> read_line() {
  vector<num> v;
  string s;
  getline(cin, s);
  stringstream ss;
  ss << s;
  num found;
  string temp;
  while (not ss.eof()) {
    ss >> temp;
    if (stringstream(temp) >> found) v.push_back(found);
    temp = "";
  }
  return v;
}

int main() {
  int k, n;
  cin >> k >> n;
  auto a = read_line<float>();
  if (a.size() != k * n) return 1;
  float max = numeric_limits<float>::min();
  for (int i = 0; i < n; i++) {
    float sum = 0;
    for (int j = 0; j < k; j++) sum += a[i*n + k];
    if (sum > max) max = sum;
  }
  cout << max << endl;
  return 0;
}
