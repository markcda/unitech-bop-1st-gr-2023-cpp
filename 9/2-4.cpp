#include <iostream>
#include <vector>

std::vector<float> read(int n) {
  std::cout << "Введите " << n << " чисел, начиная с новой строки." << std::endl;
  std::vector<float> v;
  float tmp;
  for (int i = 0; i < n; i++) {
    std::cout << "Введите n<" << i << ">: ";
    std::cin >> tmp;
    v.push_back(tmp);
  }
  return v;
}

int main() {
  std::cout << "Введите n: " << std::endl;
  std::vector<float> v;
  int n;
  std::cin >> n;
  v = read(n);
  bool prev = false;
  for (int i = 0; i < v.size(); i++) {
    if (prev) {
      if (v[i] != 0) prev = false;
      else std::cout << i-1 << ", " << i << std::endl;
    } else if (v[i] == 0) prev = true;
  }
  return 0;
}
