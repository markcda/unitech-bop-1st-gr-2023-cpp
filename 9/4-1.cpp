#include <iostream>

int main() {
  std::cout << "Введите строку:" << std::endl;
  std::string s; getline(std::cin, s);
  bool tgth = false; int cntr = 0, maxcntr = 0; 
  for (auto &ch : s) {
    if (ch == ' ') {
      if (tgth) cntr++;
      else {
        cntr = 1;
        tgth = true;
      }
    } else {
      if (tgth) {
        tgth = false;
        if (cntr > maxcntr) maxcntr = cntr;
      }
    }
  }
  std::cout << maxcntr << std::endl;
  return 0;
}
