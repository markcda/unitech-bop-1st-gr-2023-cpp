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
    cout << "input str:" << endl;
    string s;
    getline(cin, s);
    cout << "input a word:" << endl;
    string r;
    getline(cin, r);
    cout << "input a new word:" << endl;
    string nwr;
    getline(cin, nwr);
    replace(s, r, nwr);
    cout << s << endl;
    return 0;
}
