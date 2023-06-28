#include <iostream>

using namespace std;

int main() {
  string f;
  getline(cin, f);
  string g;
  getline(cin, g);
  int min_size = min(f.size(), g.size());
  for (int i = 0; i < min_size; i++) if (f[i] != g[i]) {
    cout << i + 1 << endl;
    return 0;
  }
  if (min_size < f.size() or min_size < g.size()) cout << min_size + 1 << endl;
  return 0;
}
