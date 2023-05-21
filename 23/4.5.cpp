#include <iostream>
#include <vector>
using namespace std;

struct student {
  string group;
  string name;
  int pr;
  int op;
};

int main() {
  vector<student> sts = {
    {"IBO-22-ZI", "Ovechkin", 35, 3},
    {"IBO-22-ZI", "Kerimov", 10, 9},
    {"IBO-22-ZI", "Ulseev", 0, 0},
    {"IBO-22-ZI", "Aliasenko", 2, 0},
    {"IBO-22-ZI", "Kurpatov", 110, 0},
  };
  int cpr = 0;
  int cop = 0;
  for (auto st : sts) {
    cout << st.name << "\t" << st.pr - st.op << endl;
    cpr += st.pr;
    cop += st.op;
  }
  cout << cpr << endl;
  cout << cop << endl;
  cout << float(cpr - cop) / cpr * 100 << "%" << endl;
  return 0;
}
