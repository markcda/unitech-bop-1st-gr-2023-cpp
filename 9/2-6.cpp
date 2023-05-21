#include <iostream>
#include <cmath>
#include <vector>

std::vector<int> read(int n) {
  std::cout << "Введите " << n << " чисел, начиная с новой строки." << std::endl;
  std::vector<int> v;
  int tmp;
  for (int i = 0; i < n; i++) {
    std::cout << "Введите n<" << i << ">: ";
    std::cin >> tmp;
    v.push_back(tmp);
  }
  return v;
}

int main() {
  int n;
  std::cout << "Введите n: ";
  std::cin >> n;
  std::vector<int> nums = read(n);
  int sq = 0;
  for (int j : nums) {
    for (int jr = 2; jr < j / 2; jr += 2) {
      if (j % jr == 0 && j / jr == jr) {
        sq++;
        break;
      }
    }
  }
  std::cout << sq << std::endl;
  return 0;
}
