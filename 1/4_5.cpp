#include <iostream>
#include <vector>

using namespace std;

struct officer {
  string last_name = "";
  string address = "";
  string date = "";
  int year_salary = 0;
  int cab_num = 0;
};

int main() {
    vector<officer> department;
    department.push_back({"Mulligan", "Chicago", "25.03.1993", 165000, 11});
    department.push_back({"Chapman",  "Chicago", "28.10.1995", 175000, 11});
    cout << "Zadayte godovoy fond zarplaty: ";
    int salary_bank;
    cin >> salary_bank;
    int s = 0;
    for (auto &officer : department) s += officer.year_salary;
    if (s >= salary_bank) cout << "No" << endl;
    else cout << "Yes, zarplata do " << salary_bank - s << endl;
    return 0;
}
