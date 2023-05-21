#include <iostream>
#include <vector>
using namespace std;

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

int main() {
    cout << "input str:" << endl;
    string s;
    getline(cin, s);
    vector<string> w;
    split(s, w, ' ');
    vector<string> w1;
    for (auto &s : w) {
        if (s.size() <= 1) continue;
        else w1.push_back(s);
    }
    cout << "str:";
    for (auto &s : w1) cout << " " << s;
    cout << endl;
    return 0;
}
