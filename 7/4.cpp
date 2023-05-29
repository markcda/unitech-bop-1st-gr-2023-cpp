#include <iostream>
#include <vector>

using namespace std;

int count(const string &str, const string &query) {
  int cntr = 0;
  size_t pos = str.find(query);
  size_t initialPos = 0;
  while (pos != string::npos) {
    cntr++;
    initialPos = pos + query.size();
    pos = str.find(query, initialPos);
  }
  return cntr;
}

struct student {
  string name;
  string surname;
  int clss;
  char letter;
};

struct luggage {
  int num;
  float weight;
};

int main() {
  // 1
  {
    string s;
    getline(cin, s);
    cout << count(s, "ef") << endl;
  }
  // 2
  {
    string s;
    getline(cin, s);
    string s1; s1 += s[0];
    for (int i = 1; i < s.size(); i++) {
      if (s[i] != ' ') s1 += s[i];
      else if (s[i-1] == ' ') continue;
      else s1 += s[i];
    }
    cout << s1 << endl;
  }
  // 3
  {
    string s;
    getline(cin, s);
    string query;
    getline(cin, query);
    cout << count(s, query) << endl;
  }
  // 4
  {
    vector<student> students = {
      {"Kirill", "Ovechkin", 7, 'A'},
      {"Mikhail", "Evseev", 8, 'A'},
      {"Nikolai", "Ovechkin", 7, 'A'},
      {"Kirill", "Ovechkin", 9, 'A'}
    };
    for (int i = 0; i < students.size(); i++) for (int j = i + 1; j < students.size(); j++)
      if (students[i].surname == students[j].surname)
        if (students[i].clss == students[j].clss and students[i].letter == students[j].letter)
          cout << students[i].clss << students[i].letter << ": " << students[i].name << " and " << students[j].name << " " << students[i].surname << "s" << endl;
  }
  // 5
  {
    vector<luggage> ls = {{7, 16.0},{14, 17.8},{13, 15.1}, {1, 2.2}};
    int mt2cntr = 0;
    int total = 0;
    for (const auto &lug : ls) { total += lug.num; if (lug.num > 2) mt2cntr++; }
    float mid = float(total) / ls.size();
    int mtmcntr = 0;
    for (const auto &lug : ls) if (lug.num > mid) mtmcntr++;
    cout << mt2cntr << endl;
    cout << mtmcntr << endl;
  }
  return 0;
}
