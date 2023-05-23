#include <iostream>
#include <sstream>
#include <vector>

template<typename N> std::vector<N> read_line() {
  std::vector<N> v;
  std::string s;
  getline(std::cin, s);
  std::stringstream ss;
  ss << s;
  N found;
  std::string temp;
  while (not ss.eof()) {
    ss >> temp;
    if (std::stringstream(temp) >> found) v.push_back(found);
    temp = "";
  }
  return v;
}

template<typename N> bool read_matrix(std::vector<std::vector<N>> &matrix, int i, int j) {
    for (int k = 0; k < i; k++) {
        auto line = read_line<N>();
        if (line.size() != size_t(j)) {
            std::cout << "Error" << std::endl;
            return false;
        }
        matrix.push_back(line);
    }
    return true;
}
