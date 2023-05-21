#include <iostream>
#include <vector>
#include <cstdint>

using namespace std;

bool replace(string& str, const string& from, const string& to) {
  size_t start_pos = str.find(from);
  if (start_pos == string::npos) return false;
  str.replace(start_pos, from.length(), to);
  return true;
}

size_t split(const string &txt, vector<string> &strs, char ch) {
  size_t pos = txt.find( ch );
  size_t initialPos = 0;
  strs.clear();
  while (pos != string::npos) {
    strs.push_back(txt.substr(initialPos, pos - initialPos));
    initialPos = pos + 1;
    pos = txt.find(ch, initialPos);
  }
  strs.push_back(txt.substr(initialPos, min(pos, txt.size()) - initialPos + 1));
  return strs.size();
}

struct luggage {
  int num = 0;
  float weight = 0.;
};

struct officer {
  string last_name = "";
  string address = "";
  string date = "";
  int_fast32_t year_salary = 0;
  int dprt_number = 0;
};

int main() {
  // Задача 1.
  cout << "Task 1." << endl;
  {
    cout << "\tEnter the symbols line:" << endl;
    string s;
    getline(cin, s);
    size_t n = s.find(":");
    string s0 = "";
    for (size_t i = 0; i <= n; i++) s0 += s[i];
    cout << "\tResult:" << endl << s0 << endl;
  }
  // Задача 2.
  cout << "Task 2." << endl;
  {
    cout << "\tEnter the symbols line:" << endl;
    string s;
    getline(cin, s);
    replace(s, "это", "то");
    cout << "\tResult:" << endl << s << endl;
  }
  // Задача 3.
  cout << "Task 3." << endl;
  {
    cout << "\tEnter the symbols line:" << endl;
    string s;
    getline(cin, s);
    vector<string> v;
    split(s, v, ' ');
    cout << "\tEnter the number (1 - " << v.size() << "): ";
    int i = 0;
    cin >> i;
    if (i > 0 and i < int(v.size())) cout << "\tResult: " << v[i] << endl;
  }
  // Задача 4.
  cout << "Task 4." << endl;
  {
    vector<luggage> airport_flow_inspection;
    while (true) {
      cout << "\tSelect an option:\n\t1. Add one more passenger with a luggage.\n\t2. Check and exit. [OPT]: ";
      int opt = 0;
      cin >> opt;
      if (opt == 1) {
        cout << "\t\t- Hello! How many things do you have?\n\t\t- Hi! I have the ";
        int n = 0;
        cin >> n;
        cout << "\t\t- Okay, how much weight?\n\t\t- I have ";
        float w = 0.;
        cin >> w;
        airport_flow_inspection.push_back(luggage { n, w });
      } else if (opt == 2) {
        for (auto lug : airport_flow_inspection) {
          if (lug.num == 1 and lug.weight > 30) {
            cout << "\t\tYes, we have at least one passenger with only one thing with the weight much than 30 kg." << endl;
            break;
          }
        }
        break;
      }
    }
  }
  // Задача 5.
  cout << "Task 5." << endl;
  {
    vector<officer> InternationalLegionParis;
    const string dt_format = "%d.%m.%Y";
    while (true) {
      cout << "\tSelect an option:\n\t1. Add one more officer.\n\t2. Check and exit. [OPT]: ";
      int opt = 0;
      cin >> opt;
      if (opt == 1) {
        cout << "\t\t- Well, recruit, what's your last name?\n\t\t- ";
        string ln;
        getline(cin, ln);
        getline(cin, ln);
        cout << "\t\t- Nice. What about address?\n\t\t- ";
        string addr;
        getline(cin, addr);
        cout << "\t\t- Hmm... Okay. Remind me, please, what date it is today?\n\t\t- [In format of DD.MM.YYYY] ";
        string dt;
        getline(cin, dt);
        cout << "\t\tAt this point, the interviewer turns to the accountant and asks:\n\t\t- What salary will the new officer receive?\n\t\t- ";
        int_fast32_t yi = 0;
        cin >> yi;
        cout << "\t\tThe interviewer calls the department and asks which office he should come to tomorrow. They answered:\n\t\t- ";
        int dn = 0;
        cin >> dn;
        InternationalLegionParis.push_back(officer { ln, addr, dt, yi, dn });
      } else if (opt == 2) {
        int_fast32_t min_income = INT_FAST32_MAX;
        string last_n = "";
        for (auto officer : InternationalLegionParis) {
          if (officer.year_salary < min_income) {
            min_income = officer.year_salary;
            last_n = officer.last_name;
          }
        }
        cout << "\t\tThe officer `" << last_n << "` have $" << min_income << " in a year." << endl;
        break;
      }
    }
  }
  return 0;
}
