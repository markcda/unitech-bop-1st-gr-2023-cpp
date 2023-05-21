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

void sort(vector<string> &ws) {
  for (int i = 0; i < ws.size(); i++)
    for (int j = i; j < ws.size(); j++)
      if (ws[i] > ws[j]) swap(ws[i], ws[j]);
}

int main() {
  string s;
  getline(cin, s);
  vector<string> ws;
  split(s, ws, ' ');
  sort(ws);
  for (auto &w : ws) cout << w << endl;
  return 0;
}
