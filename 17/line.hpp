#include <vector>
#include <iostream>
#include <sstream>

template<typename Number> std::vector<Number> read_line() {
  std::vector<Number> v;
  std::string s;
  getline(std::cin, s);
  std::stringstream ss;
  ss << s;
  Number found;
  std::string temp;
  while (not ss.eof()) {
    ss >> temp;
    if (std::stringstream(temp) >> found) v.push_back(found);
    temp = "";
  }
  return v;
}
