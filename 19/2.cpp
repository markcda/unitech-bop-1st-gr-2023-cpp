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

int main() {
  setlocale(0, "");
  cout << "Лабораторную работу выполнил Терешенков Алексей, группа ИБО-ЗИ-22\nВариант №19\n25.05.2023\n";
  int opt;
  while (true) {
    cout << "Выберите задание (1-6): ";
    cin >> opt;
    if (opt < 1 or opt > 6) return 0;
    switch (opt) {
      case 1: {
        cout << "Введите a: ";
        string tmp; getline(cin, tmp);
        auto a = read_line<float>();
        for (int i = 0; i < a.size(); i++) {
          cout << "\t" << pow(-1, i + 1) * a[i] << endl;
        }
      } break;
      case 2: {
        int u0 = 1;
        int u1 = 1;
        int n;
        cout << "Введите n: ";
        cin >> n;
        int u;
        for (int i = 2; i <= n; i++) {
          u = u0 + u1;
          u0 = u1;
          u1 = u;
          cout << "\t" << u << endl;
        }
      } break;
      case 3: {
        string tmp; getline(cin, tmp);
        auto a = read_line<float>();
        int poscntr = 0, negcntr = 0;
        for (auto &el : a) { if (el > 0) poscntr++; else if (el < 0) negcntr++; }
        if (poscntr >= negcntr) cout << "\tНет, так как положительных чисел " << poscntr << ", а отрицательных - " << negcntr << endl;
        else cout << "\tДа, это так" << endl;
      } break;
      case 4: {
        string tmp; getline(cin, tmp);
        auto a = read_line<float>();
        float z;
        float min = numeric_limits<float>::max();
        for (auto &el : a) {
          if (abs(el) > 1) z = el;
          else z = 2;
          if (z < min) min = z;
        }
        cout << "\t" << z << endl;
      } break;
      case 5: {
        cout << "Введите 10 чисел: ";
        string tmp; getline(cin, tmp);
        auto a = read_line<int>();
        if (a.size() != 10) return 1;
        cout << "Введите b: ";
        auto b = read_line<int>();
        if (a.size() != b.size()) cout << "Неверно." << endl;
        else {
          for (int i = 0; i < a.size(); i++) {
            bool found = false;
            for (int j = 0; j < b.size(); j++) if (a[i] == b[j]) { found = true; break; }
            if (not found) { cout << "Неверно." << endl; break; }
          }
          cout << "Верно!" << endl;
        }
      } break;
      case 6: {
        string tmp; getline(cin, tmp);
        auto a = read_line<float>();
        float sum = 0.0;
        for (int i = 1; i < a.size(); i++) {
          if (a[i] < 0) break;
          sum += a[i-1] * a[i];
        }
        cout << sum << endl;
      } break;
    }
  }
  return 0;
}
