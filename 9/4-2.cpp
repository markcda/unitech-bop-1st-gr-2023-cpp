#include <iostream>
#include <vector>

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
  std::cout << "Введите строку:" << std::endl;
  std::string s; getline(std::cin, s);
  std::vector<std::string> words;
  split(s, words, ' ');
  int cntr = 0;
  auto lw = words.back();
  for (auto &ch : lw) {
    if (ch == 'a') cntr++;
  }
  std::cout << cntr << std::endl;
  return 0;
}
