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
  std::cout << "Введите k и n: ";
  int k, n;
  std::cin >> k >> n;
  std::vector<float> a = read(k*n);
  for (int i = 0; i < n; i++) {
    float s = 0;
    for (int j = 0; j < k; j++) {
      s += a[i*k + j];
    }
    std::cout << s << std::endl;
  }
  return 0;
}
