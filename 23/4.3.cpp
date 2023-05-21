#include <iostream>
#include <vector>
using namespace std;

size_t split(const std::string &txt, std::vector<std::string> &strs, char ch) {
  size_t pos = txt.find( ch );
  size_t initialPos = 0;
  strs.clear();
  while (pos != std::string::npos) {
    strs.push_back(txt.substr(initialPos, pos - initialPos));
    initialPos = pos + 1;
    pos = txt.find(ch, initialPos);
  }
  strs.push_back(txt.substr(initialPos, std::min(pos, txt.size()) - initialPos + 1));
  return strs.size();
}

int main() {
  string s;
  getline(cin, s);
  vector<string> words;
  split(s, words, ' ');
  int maxlen = words[0].size();
  string smxl;
  for (auto &word : words) if (word.size() > maxlen) { maxlen = word.size(); smxl = word; }
  cout << smxl << endl;
  return 0;
}
