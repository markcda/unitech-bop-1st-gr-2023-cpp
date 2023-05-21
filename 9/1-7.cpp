#include <iostream>

int main() {
  float x1 = 0.5, y1 = 0.5;
  int n;
  std::cout << "Введите n (n > 2): ";
  std::cin >> n;
  float currx = x1, curry = y1;
  float prevx, prevy;
  for (int i = 2; i <= n; i++) {
    prevx = currx;
    prevy = curry;
    currx = 3.7 * prevy;
    curry = prevx + prevy;
  }
  std::cout << prevx << "\t" << prevy << std::endl;
  return 0;
}
