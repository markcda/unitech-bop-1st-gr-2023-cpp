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
    int now1;
    int now2;
    int now3;
};

int main() {
    vector<worker> ws = {
        {814, "Гринёва Мария", 1985, false, 15, 3, 1, 13, 71244},
        {112, "Васильев Корней", 1990, true, 7, 1, 2, 18, 82640},
        {224, "Лябода Майя", 1988, false, 1, 2, 1, 14, 22441}
    };
    vector<datamodel> dm;
    for (auto &w : ws) {
        bool found = false;
        for (auto &d : dm) if (d.sn == w.sn) { found = true; break; }
        if (not found) dm.push_back({w.sn, 0, 0, 0});
        for (int i = 0; i < dm.size(); i++) if (dm[i].sn == w.sn) {
            if (w.rr == 1) dm[i].now1++;
            else if (w.rr == 2) dm[i].now2++;
            else if (w.rr == 3)  dm[i].now3++;
        }
    }
    for (auto &d : dm) cout << d.sn << "\t" << d.now1+d.now2+d.now3 << "\t" << d.now1 << "\t" << d.now2 << "\t" << d.now3 << "\t" << endl;
    return 0;
}
