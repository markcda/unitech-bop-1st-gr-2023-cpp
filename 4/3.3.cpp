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

vector<vector<float>> removeij(matrix<float> M, int i1, int j1) {
  vector<vector<float>> A1;
  for (int i = 0; i < M.m.size(); i++) {
    if (i == i1) continue;
    vector<float> line;
    for (int j = 0; j < M.m[0].size(); j++) {
      if (j == j1) continue;
      line.push_back(M.m[i][j]);
    }
    A1.push_back(line);
  }
  return A1;
}

int main() {
  int n;
  cin >> n;
  auto A = read_matrix<float>(n, n);
  if (not A.valid) return 1;
  int i, j;
  cin >> i >> j;
  auto A1 = removeij(A, i, j);
  return 0;
}
