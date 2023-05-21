#include <iostream>
#include <vector>

using namespace std;

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

struct datamodel {
  int sn;
  int sw1rr;
  int now1;
  int sw2rr;
  int now2;
  int sw3rr;
  int now3;
};

int main() {
  vector<worker> ws = {
    {11716, "Soloviev Evgeniy Pavlovich", 1985, true, 15, 3, 1, 13, 197000},
    {11717, "Korolev Artur Dzhanibekovich", 1990, true, 7, 1, 2, 18, 102000},
    {11718, "Mnizhek Kseniya Artemyevna", 1988, false, 9, 2, 1, 14, 124400}
  };
  vector<datamodel> dm;
  for (auto &w : ws) {
    bool found = false;
    for (auto &d : dm) if (d.sn == w.sn) { found = true; break; }
    if (not found) dm.push_back({w.sn, 0, 0, 0, 0, 0, 0});
    for (int i = 0; i < dm.size(); i++) if (dm[i].sn == w.sn) {
      if (w.rr == 1) {
        dm[i].sw1rr += w.salary;
        dm[i].now1++;
      } else if (w.rr == 2) {
        dm[i].sw2rr += w.salary;
        dm[i].now2++;
      } else if (w.rr == 3) {
        dm[i].sw3rr += w.salary;
        dm[i].now3++;
      }
    }
  }
  for (auto &d : dm) cout << d.sn << "\t" << d.now1+d.now2+d.now3 << "\t" << (d.sw1rr+d.sw2rr+d.sw3rr)/(d.now1+d.now2+d.now3) << "\t" << d.sw1rr/(d.now1+0.00000001) << "\t" << d.sw2rr/(d.now2+0.00000001) << "\t" << d.sw3rr/(d.now3+0.00000001) << "\t" << endl;
  return 0;
}
