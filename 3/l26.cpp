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
  auto t = read_line<float>();
  vector<float> c;
  float s = 0, min = t[0];
  int min_n = 0;
  c.push_back(s);
  for (int i = 1; i < t.size(); i++) {
    c.push_back(t[i - 1]);
    if (t[i] < min) { min = t[i]; min_n = i; }
  }
  cout << "number of customer: " << min_n << endl;
  cout << "c:" << endl;
  for (const auto &el : c) cout << el << endl;
  return 0;
}
