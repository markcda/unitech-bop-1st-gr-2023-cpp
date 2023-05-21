#include <iostream>
#include <vector>

using namespace std;

bool replace(string& str, const string& from, const string& to) {
  size_t start_pos = str.find(from);
  if (start_pos == string::npos) return false;
  str.replace(start_pos, from.length(), to);
  return true;
}

int main() {
  string s;
  getline(cin, s);
  while (replace(s, "ing", "ed")) {}
  cout << s << endl;
  return 0;
}
