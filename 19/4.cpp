#include <iostream>
#include <vector>

using namespace std;

bool isletter(char &ch) {
  if (ch >= 'a' and ch <= 'z') return true;
  return false;
}

struct telephone {
  string surname;
  string initials;
  string phone;
};

struct worker {
  int tn;
  string name;
  int bdy;
  bool sex;
  int yow;
  int rr;
  int dn;
  int sn;
  int salary;
};

int main() {
  setlocale(0, "");
  cout << "Лабораторную работу выполнил Терешенков Алексей, группа ИБО-ЗИ-22\nВариант №19\n25.05.2023\n";
  int opt;
  while (true) {
    cout << "Выберите задание (1-5): ";
    cin >> opt;
    if (opt < 1 or opt > 5) return 0;
    switch (opt) {
      case 1: {
        string s;
        getline(cin, s);
        int cntr = 0;
        for (auto &ch : s) if (ch == 'x') cntr++;
        cout << cntr << endl;
      } break;
      case 2: {
        string s;
        getline(cin, s);
        char control; bool found = false;
        for (auto &ch : s) {
          if (not found) {
            if (isletter(ch)) { found = true; control = ch; }
          } else {
            if (isletter(ch)) control = ch;
            else break;
          }
        }
        int cntr = 0;
        bool word = false; char curr;
        for (auto &ch : s) {
          if (not word) { if (isletter(ch)) { word = true; curr = ch; } }
          else {
            if (isletter(ch)) curr = ch;
            else if (curr != control) cntr++;
          }
        }
        cout << cntr << endl;
      } break;
      case 3: {
        string s;
        getline(cin, s);
        int n, in;
        cin >> n >> in;
        string s1;
        for (int i = 0; i < in; i++) s1 += s[i];
        for (int i = 0; i < n; i++) s1 += ' ';
        for (int i = in; i < s.size(); i++) s1 += s[i];
        cout << s1 << endl;
      } break;
      case 4: {
        vector<telephone> ts = {
          {"Amebe", "K.V.", "+110164628488"},
          {"Amebe", "K.S.", "+110164628489"}
        };
        string sn, ins;
        getline(cin, sn);
        getline(cin, ins);
        for (auto &t : ts) if (t.surname == sn and t.initials == ins) { cout << t.phone << endl; break; }
      } break;
      case 5: {
        vector<worker> ws = {
          {11716, "Soloviev Evgeniy Pavlovich", 1985, true, 15, 3, 1, 13, 197000},
          {11717, "Korolev Artur Dzhanibekovich", 1990, true, 7, 1, 2, 13, 102000},
          {11718, "Mnizhek Kseniya Artemyevna", 1988, false, 9, 2, 1, 14, 124400}
        };
        vector<int> dns = {1,2,3};
        for (auto &dn : dns) {
          float rrs1 = 0, rrs2 = 0, rrs3 = 0;
          int cntr1 = 0, cntr2 = 0, cntr3 = 0;
          for (auto &w : ws) if (w.dn == dn) {
            if (w.rr == 1) {
              cntr1++;
              rrs1 += w.salary;
            } else if (w.rr == 2) {
              cntr2++;
              rrs2 += w.salary;
            } else if (w.rr == 3) {
              cntr3++;
              rrs3 += w.salary;
            }
          }
          if (cntr1 != 0) rrs1 /= cntr1;
          if (cntr2 != 0) rrs2 /= cntr2;
          if (cntr3 != 0) rrs3 /= cntr3;
          for (auto &w : ws) if (w.dn == dn) {
            cout << dn << "\t" << rrs1+rrs2+rrs3 << "\t" << rrs1 << "\t" << rrs2 << "\t" << rrs3 << endl;
          }
        }
      } break;
    }
  }
  return 0;
}
