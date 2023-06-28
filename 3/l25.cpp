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
  int cntr = 0;
  for (const auto &el : a) if (el % 2 == 1) cntr++;
  cout << cntr << endl;
  return 0;
}
