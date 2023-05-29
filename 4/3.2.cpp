#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

template<typename T> vector<T> read_line() {
  vector<T> v;
  string s;
  getline(cin, s);
  stringstream ss;
  ss << s;
  T found;
  string temp;
  while (not ss.eof()) {
    ss >> temp;
    if (stringstream(temp) >> found) {
      v.push_back(found);
    }
    temp = "";
  }
  return v;
}

template<typename T> void sort(vector<T> vec) {
  for (int i = 0; i < vec.size(); i++)
    for (int j = i + 1; j < vec.size(); j++)
      if (vec[i] > vec[j]) swap(vec[i], vec[j]);
}

int main() {
  auto a = read_line<float>();
  sort(a);
  for (auto &el : a) cout << el << endl;
  return 0;
}
