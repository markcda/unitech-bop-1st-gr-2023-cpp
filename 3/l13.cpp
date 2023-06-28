#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float a, b, c, d, s, t, u;
  cin >> a >> b >> c >> d >> s >> t >> u;
  if ((s*a + t*b + u)*(s*c + t*d + u) < 0) cout << "yes" << endl;
  else cout << "no" << endl;
  return 0;
}
