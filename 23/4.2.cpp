#include <iostream>
#include <vector>
using namespace std;

int main() {
  string s;
  getline(cin, s);
  string s1;
  int i;
  for (i = 0; i < s.size() && s[i] != ' '; i++) {
    if (s[i] >= 'a' && s[i] <= 'z') s1.push_back(s[i]);
  }
  for (; i < s.size(); i++) s1.push_back(s[i]);
  cout << s1 << endl;
  return 0;
}
