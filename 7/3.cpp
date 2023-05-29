#include <iostream>
#include <iterator>
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

float fmax(const vector<float> &vec) {
  float mx = vec[0];
  for (const auto &el : vec) if (el > mx) mx = el;
  return mx;
}

int cpos(const vector<int> &line) {
  int cntr = 0;
  for (const auto &el : line) if (el > 0) cntr++;
  return cntr;
}

int main() {
  // 1
  {
    int m;
    cin >> m;
    auto a = read_line<int>();
    if (a.size() != m) return 1;
    auto B = read_matrix<int>(m, m);
    if (not B.valid) return 1;
    for (int i = 0; i < m; i++) {
      if (a[i] > 0) {
        int min = B.m[i][0];
        for (const auto &el : B.m[i]) if (el < min) min = el;
        cout << i << ": " << min << endl;
      }
    }
  }
  // 2
  {
    auto x = read_line<float>();
    auto y = read_line<float>();
    auto z = read_line<float>();
    float maxx = fmax(x), maxy = fmax(y), maxz = fmax(z);
    if (maxx > 0) cout << maxy + maxz << endl;
    else cout << 1 + maxx*maxx << endl;
  }
  // 3
  {
    int n;
    cin >> n;
    auto A = read_matrix<int>(n, n);
    if (not A.valid) return 1;
    auto B = read_matrix<int>(n, n);
    if (not B.valid) return 1;
    vector<int> b;
    for (int i = 0; i < n; i++) {
      if (cpos(A.m[i]) + cpos(B.m[i]) <= 3) b.push_back(1);
      else b.push_back(0);
    }
    for (const auto &el : b) cout << el << endl;
  }
  // 4
  {
    int n;
    cin >> n;
    auto B = read_matrix<float>(n, n);
    if (not B.valid) return 1;
    float mx = B.m[0][0];
    for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++)
        if (j <= n - 1 - i)
          if (B.m[i][j] > mx) mx = B.m[i][j];
    cout << mx << endl;
  }
  return 0;
}
