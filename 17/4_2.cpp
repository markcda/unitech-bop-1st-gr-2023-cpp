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

int count(string &s) {
  int cntr = 0;
  for (auto &ch : s) if (ch == 'a' || ch == 'b') cntr++;
  return cntr;
}

int main() {
  string s;
  getline(cin, s);
  vector<string> ws;
  split(s, ws, ' ');
  int cntr = count(ws[0]), curr;
  for (int i = 0; i < ws.size(); i++) {
    curr = count(ws[i]);
    if (curr > cntr) cntr = curr;
  }
  for (int i = 0; i < ws.size(); i++)
    if (count(ws[i]) == cntr) cout << ws[i] << endl;
  return 0;
}
