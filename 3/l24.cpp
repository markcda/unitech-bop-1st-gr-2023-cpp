#include <iostream>
#include <sstream>
#include <cmath>
#include <vector>

using namespace std;

template<typename num> vector<num> read_line() {
  vector<num> v;
  string s;
  getline(cin, s);
  stringstream ss;
  ss << s;
  num found;
  string temp;
  while (not ss.eof()) {
    ss >> temp;
    if (stringstream(temp) >> found) v.push_back(found);
    temp = "";
  }
  return v;
}

int main() {
  auto a = read_line<int>();
  vector<int> non_unique;
  for (int i = 0; i < a.size(); i++) {
    bool unique = true;
    for (const auto &el : non_unique) if (a[i] == el) { unique = false; break; }
    if (not unique) continue;
    for (int j = i + 1; j < a.size(); j++) if (a[i] == a[j]) {
      non_unique.push_back(a[i]);
      break;
    }
  }
  cout << non_unique.size() << endl;
  return 0;
}
