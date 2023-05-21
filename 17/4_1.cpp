#include <iostream>
#include <vector>

using namespace std;

int main() {
  string s;
  getline(cin, s);
  for (int i = 1; i < s.size(); i++) if (s[i] == 'a' && s[i-1] == 'a') { cout << i << endl; return 0; }
  cout << 0 << endl;
  return 0;
}
