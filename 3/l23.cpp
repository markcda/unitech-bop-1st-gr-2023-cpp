#include <iostream>
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
  int i, n;
  cin >> i >> n;
  auto a = read_line<float>();
  if (a.size() != n) return 1;
  float sum = 0;
  for (int k = 0; k < n; k++) if (k != i - 1) sum += a[k];
  cout << sum / (a.size() - 1) << endl;
  return 0;
}
