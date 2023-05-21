#include <iostream>
using namespace std;

int main() {
  float e;
  cout << "Vvedite e (0<e<1): ";
  cin >> e;
  float ypr, ycr = 1;
  do {
    ypr = ycr;
    ycr = (ypr+1)/(ypr+2);
  } while (abs(ycr-ypr)>=e);
  cout << ycr << endl;
  return 0;
}
