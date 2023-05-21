#include <iostream>
#include <cmath>
#include <vector>

std::vector<float> read() {
  std::cout << "Введите n: ";
  int n;
  std::cin >> n;
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
  std::vector<float> a = read();
  if (a.size() != 4) {
    std::cout << "Ошибка! Нужно было ввести 4 числа" << std::endl;
    return 1;
  }
  std::vector<float> x = read();
  std::vector<float> b;
  for (int i = 0; i < x.size(); i++) {
    b.push_back(
      (powf(x[i],2)-x[i]-a[0])/(x[i]-a[0])*(powf(x[i],3)-x[i]-a[1])/(x[i]-a[1])*(x[i]-a[2]) - (powf(x[i],4)-x[i]+a[3])/(x[i]) + x[i]*(x[i]+a[2])
    );
    std::cout << b[i] << std::endl;
  }
  return 0;
}
