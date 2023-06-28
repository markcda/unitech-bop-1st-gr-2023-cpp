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

template<typename T> struct matrix {
  vector<vector<T>> m;
  bool valid = false;
};

template<typename num> matrix<num> read_matrix(int i, int j) {
  vector<vector<num>> m;
  for (int k = 0; k < i; k++) {
    auto line = read_line<num>();
    if (line.size() != size_t(j)) {
      cout << "Error" << endl;
      return matrix<num> {{}, false};
    }
    m.push_back(line);
  }
  return matrix<num> {m, true};
}

float min(const vector<float> &vec) {
  float m = numeric_limits<float>::max();
  for (const auto &el : vec) if (el*el < m) m = el*el;
  return m;
}

float max(const vector<float> &vec) {
  float m = numeric_limits<float>::min();
  for (const auto &el : vec) if (abs(el) < m) m = abs(el);
  return m;
}

int main() {
  int n;
  cin >> n;
  auto A = read_matrix<float>(n, n);
  if (not A.valid) return 1;
  auto b = read_line<float>();
  if (b.size() != n) return 1;
  vector<float> c;
  for (int i = 0; i < n; i++) {
    float sum = 0;
    for (int j = 0; j < n; j++) sum += A.m[i][j];
    c.push_back(b[i] * sum);
  }
  for (const auto &el : c) cout << el << endl;
  cout << min(b) / max(c) << endl;
  return 0;
}
