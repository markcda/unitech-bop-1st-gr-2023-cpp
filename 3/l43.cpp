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
  string s;
  getline(cin, s);
  vector<string> words;
  split(s, words, ' ');
  int i, j;
  cin >> i >> j;
  if (i >= words.size() or j >= words.size()) return 1;
  swap(words[i], words[j]);
  for (const auto &word : words) cout << " " << word;
  cout << endl;
  return 0;
}
