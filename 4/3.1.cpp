#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

template<typename T> vector<T> read_line() {
  vector<T> v;
  string s;
  getline(cin, s);
  stringstream ss;
  ss << s;
  T found;
  string temp;
  while (not ss.eof()) {
    ss >> temp;
    if (stringstream(temp) >> found) {
      v.push_back(found);
    }
    temp = "";
  }
  return v;
}

template<typename T> struct matrix {
  vector<vector<T>> m;
  bool valid = false;
};

template<typename T> matrix<T> read_matrix(int i, int j) {
  vector<vector<T>> m;
  for (int ii = 0; ii < i; ii++) {
    auto line = read_line<T>();
    if (line.size() != size_t(j)) {
      cout << "Ошибка!" << endl;
      return matrix<T> {{}, false};
    }
    m.push_back(line);
  }
  return matrix<T> {m, true};
}

int main() {
  int n;
  cin >> n;
  auto A = read_matrix<float>(n, n);
  if (not A.valid) return 1;
  float min = A.m[0][0]; int l = 0;
  for (int i = 0; i < n; i++) for (auto &el : A.m[i]) if (el < min) { min = el; l = i; }
  float sum = 0.0;
  for (auto &el : A.m[l]) sum += el;
  cout << sum << endl;
  return 0;
}
