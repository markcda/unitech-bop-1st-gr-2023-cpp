#include <iostream>
#include <vector>
#include <sstream>
#include <cmath>
#include <limits>

using namespace std;

template<typename N> vector<N> read_line() {
  vector<N> v;
  string s;
  getline(cin, s);
  stringstream ss;
  ss << s;
  N found;
  string temp;
  while (not ss.eof()) {
    ss >> temp;
    if (stringstream(temp) >> found) v.push_back(found);
    temp = "";
  }
  return v;
}

template<typename N> bool read_matrix(vector<vector<N>> &matrix, int i, int j) {
  for (int k = 0; k < i; k++) {
    auto line = read_line<N>();
    if (line.size() != size_t(j)) {
      cout << "Ошибка" << endl;
      return false;
    }
    matrix.push_back(line);
  }
  return true;
}

float fmin(const vector<float> &line) {
  float min = line[0];
  for (auto &el : line) if (min > el) min = el;
  return min;
}

float fsumwsi(const vector<vector<float>> &matrix, int &m) {
  float swsi = 0.0;
  for (int i = 0; i < matrix.size(); i++) {
    if (m - i >= matrix.size()) continue;
    swsi += matrix[i][m-i];
  }
  return swsi;
}

int main() {
  setlocale(0, "");
  cout << "Лабораторную работу выполнил Терешенков Алексей, группа ИБО-ЗИ-22\nВариант №19\n25.05.2023\n";
  int opt;
  while (true) {
    cout << "Выберите задание (1-4): ";
    cin >> opt;
    if (opt < 1 or opt > 4) return 0;
    switch (opt) {
      case 1: {
        int m, n;
        cout << "Введите m, n: ";
        cin >> m >> n;
        vector<vector<float>> A;
        cout << "Введите матрицу A:" << endl;
        string tmp; getline(cin, tmp);
        if (not read_matrix(A, m, n)) return 1;
        vector<float> b;
        for (int i = 0; i < m; i++) {
          bool hasneg = false;
          for (auto &el : A[i]) if (el < 0) { hasneg = true; b.push_back(el); break; }
          if (not hasneg) b.push_back(1);
        }
        for (auto &el : b) cout << "\t" << el << endl;
      } break;
      case 2: {
        int n;
        cin >> n;
        string tmp; getline(cin, tmp);
        vector<vector<float>> A;
        if (not read_matrix(A, n, n)) return 1;
        auto b = read_line<float>();
        if (b.size() != n) return 1;
        vector<float> z;
        for (int i = 0; i < n; i++) {
          float min = fmin(A[i]);
          if (abs(A[i][0]) > 1) z.push_back(b[i] / min);
          else z.push_back(b[i]);
        }
      } break;
      case 3: {
        int n, m;
        cout << "Введите n, m: ";
        cin >> n >> m;
        vector<vector<float>> C;
        cout << "Введите матрицу C:" << endl;
        string tmp; getline(cin, tmp);
        if (not read_matrix(C, n, n)) return 1;
        if (m > 2*n) return 1;
        cout << fsumwsi(C, m) << endl;
      } break;
      case 4: {
        int n;
        cout << "Введите n: ";
        cin >> n;
        vector<vector<float>> D;
        cout << "Введите матрицу D:" << endl;
        string tmp; getline(cin, tmp);
        if (not read_matrix(D, 2*n, 2*n)) return 1;
        vector<vector<float>> D1;
        for (int i = 0; i < 2*n; i++) {
          vector<float> line;
          for (int j = 0; j < 2*n; j++) line.push_back(0);
          D1.push_back(line);
        }
        for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) D1[n+i][n+j] = D[i][j];
        for (int i = n; i < 2*n; i++) for (int j = 0; j < n; j++) D1[n-i][n+j] = D[i][j];
        for (int i = 0; i < n; i++) for (int j = n; j < 2*n; j++) D1[n+i][n-j] = D[i][j];
        for (int i = n; i < 2*n; i++) for (int j = n; j < 2*n; j++) D1[n-i][n-j] = D[i][j];
      } break;
    }
  }
  return 0;
}
