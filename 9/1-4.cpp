#include <iostream>
#include <cmath>

float y(float x) {
  return powf(tan(x), 2.0) * sqrt(5.1 * x*x) / powf(x, 4.0);
}

int main() {
  float curr = y(-1.7);
  float min = curr;
  for (float x = -1.7; x <= 1.71; x += 0.2) {
    curr = y(x);
    std::cout << x << "\t" << curr << std::endl;
    if (curr < min) min = curr;
  }
  std::cout << "Минимальное y: " << min << std::endl;
  return 0;
}
