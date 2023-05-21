#include <iostream>
#include <vector>
using namespace std;

struct student {
    string group;
    string discipline;
    int a_gr;
    int b_gr;
    int c_gr;
    int d_gr;
    int avoided_l;
    int avoided_p;
};

struct datamodel {
    string discipline;
    int a_gr;
    int b_gr;
    int c_gr;
    int d_gr;
    int abse;
};

int main() {
    vector<student> students = {
        {"7A", "Algebra", 5, 6, 2, 0, 3, 0},
        {"7A", "Algebra", 2, 9, 1, 3, 6, 4},
        {"8B", "Algebra", 15, 7, 1, 1, 0, 0},
        {"9A", "Algebra", 9, 6, 2, 0, 3, 0}
    };
    vector<datamodel> r;
    for (auto &st : students) {
        bool found = false;
        for (auto &d : r) if (d.discipline == st.discipline) { found = true; break; }
        if (not found) r.push_back({st.discipline, 0, 0, 0, 0, 0});
        for (int i = 0; i < r.size(); i++) if (r[i].discipline == st.discipline) {
            r[i].a_gr += st.a_gr;
            r[i].b_gr += st.b_gr;
            r[i].c_gr += st.c_gr;
            r[i].d_gr += st.d_gr;
        }
    }
    for (auto &d : r) cout << d.discipline << "\t" << float(5*d.a_gr + 4*d.b_gr + 3*d.c_gr + 2*d.d_gr)/(d.a_gr + d.b_gr + d.c_gr + d.d_gr) << "\t" << d.a_gr << "\t" << d.b_gr << "\t" << d.c_gr << "\t" << d.d_gr << endl;
    return 0;
}
