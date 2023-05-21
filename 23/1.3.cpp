#include <iostream>
using namespace std;

int main() {
  float a, b, c, x, y;
  cout << "Vvedite a, b, c, x, y: "<<endl;
  cin >> a >> b >> c >> x >> y;
  if (a <= x) {
    if (b <= y or c <= y) cout << "da" << endl;
    else cout << "net" << endl;
  } else if (a <= y) {
    if (b <= x or c <= x) cout << "da" << endl;
    else cout << "net" << endl;
  } else if (b <= x) {
    if (c <= y) cout << "da" << endl;
    else cout << "net" << endl;
  } else if (b <= y) {
    if (c <= x) cout << "da" << endl;
    else cout << "net" << endl;
  } else cout << "net" << endl;
  return 0;
}
