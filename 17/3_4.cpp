#include <iostream>
#include <vector>
#include <limits>
#include "matrix.hpp"

using namespace std;

enum Direction { Right, Up, Left, Down };

int main() {
  const int n = 7;
  cout << "Input C:" << endl;
  auto C = read_matrix<float>(n, n);
  if (!C.valid) return 1;
  vector<float> b;
  int ypos = 6, xpos = 0;
  for (int i = 0; i < n; i++, xpos++) {
    b.push_back(C.m[ypos][xpos]);
  }
  xpos--;
  int a = 6;
  int f = 0;
  Direction direction = Up;
  do {
    for (int i = 0; i < a; i++) {
      if (direction == Up) b.push_back(C.m[ypos--][xpos]);
      else if (direction == Left) b.push_back(C.m[ypos][xpos--]);
      else if (direction == Down) b.push_back(C.m[ypos++][xpos]);
      else if (direction == Right) b.push_back(C.m[ypos][xpos++]);
    }
    if (direction == Up) direction = Left;
    else if (direction == Left) direction = Down;
    else if (direction == Down) direction = Right;
    else if (direction == Right) direction = Up;
    f++;
    if (f == 2) {
      f = 0;
      a--;
    }
  } while (a > 0);
  for (int i = 0; i < b.size(); i++) cout << b[i] << endl;
  return 0;
}
