#include <iostream>
#include <vector>
using namespace std;

struct modeldata {
    string vendor;
    int cntr;
};

struct autom {
    string vendor;
    string firstname;
    string lastname;
};

int main() {
    vector<autom> autos = {
        {"Volvo", "Er", "Michelin"},
        {"Lada", "Petya", "Razumovsky"},
        {"Mercedes", "Kostya", "Ernst"}
    };
    vector<modeldata> models;
    for (auto &m : autos) {
        bool found = false;
        for (auto &d : models) if (d.vendor == m.vendor) { found = true; break; }
        if (not found) models.push_back({m.vendor, 0});
    }
    for (auto &m : autos) {
        for (int i = 0; i < models.size(); i++) if (models[i].vendor == m.vendor) models[i].cntr++;
    }
    for (auto &d : models) cout << d.vendor << "\t" << d.cntr << endl;
    return 0;
}
