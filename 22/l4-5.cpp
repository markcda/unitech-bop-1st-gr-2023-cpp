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
    int from;
    int to;
    int r1 = 0;
    int r2 = 0;
    int r3 = 0;
};

int main() {
    vector<worker> ws = {
        {102, "Mishchyuk Evgeniy Pavlovich", 1985, true, 15, 3, 1, 13, 203000},
        {1034, "Korolev Artur Dzhanibekovich", 1990, true, 7, 1, 2, 13, 102000},
        {542, "Yakovleva Kseniya Artemyevna", 1988, false, 9, 2, 1, 14, 124400}
    };
    vector<datamodel> dm = {
        {0, 6},
        {6, 11},
        {11, 16},
        {16, 21},
        {21, 80}
    };
    for (auto &w : ws) {
        for (int i = 0; i < dm.size(); i++) if (w.yow >= dm[i].from and w.yow < dm[i].to) {
            if (w.rr == 1) dm[i].r1++;
            else if (w.rr == 2) dm[i].r2++;
            else if (w.rr == 3) dm[i].r3++;
        }
    }
    for (auto &d : dm)
        cout 
            << d.from << "-" 
            << d.to << "\t" 
            << d.r1+d.r2+d.r3 << "\t" 
            << d.r1 << "\t" 
            << d.r2 << "\t" 
            << d.r3 << endl;
  return 0;
}

