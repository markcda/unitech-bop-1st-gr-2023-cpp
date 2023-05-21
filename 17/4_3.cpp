#include <iostream>
#include <vector>

using namespace std;

int main() {
  string s = "123456789";
  int f = 3, t = 2;
  string s1;
  for (int i = 0; i < f - t; i++) s1.push_back(s[i]);
  for (int i = f; i < s.size(); i++) s1.push_back(s[i]);
  cout << s1 << endl;
  return 0;
}
