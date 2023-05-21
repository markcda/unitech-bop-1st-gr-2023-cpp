#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Vvedite n: ";
  cin >> n;
  float s = 0;
  for (int i = 1; i <= n; i++) s += 1 + 1.0/(i*i);
  cout << s << endl;
  return 0;
}
