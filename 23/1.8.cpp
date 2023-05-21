#include <iostream>
#include <cmath>
using namespace std;

int factorial(int k) {
  if (k <= 1) return 1;
  else return k * factorial(k-1);
}

int main() {
  float e;
  cout << "Vvedite e (0<e<1): ";
  cin >> e;
  float x;
  cout << "Vvedite x: ";
  cin >> x;
  float sp, sc = 0;
  int k = 1;
  do {
    sp = sc;
    sc = pow(-1, k+1)/factorial(k+1) * powf(x/3, k);
    k++;
  } while (abs(sc-sp) >= e);
  cout << sc << endl;
  return 0;
}
