#include <iostream>

int main() {
  std::cout << "Введите строку:" << std::endl;
  std::string s; getline(std::cin, s);
  std::string s1; s1.push_back(s[0]); for (int i = 1; i < s.size(); i++) {
    if (s[i] != s[i-1]) s1.push_back(s[i]);
  }
  std::cout << s1 << std::endl;
  return 0;
}
