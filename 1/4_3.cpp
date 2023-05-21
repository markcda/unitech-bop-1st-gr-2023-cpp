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
    cout << "Vvedite slova:" << endl;
    string s; getline(cin, s);
    vector<string> v;
    split(s, v, ' ');
    cout << "Vvedite iskomoye slovo:" << endl;
    string f; getline(cin, f);
    for (size_t i = 0; i < v.size(); i++) if (v[i] == f) cout << "Ego nomer: " << i << endl;
    return 0;
}
