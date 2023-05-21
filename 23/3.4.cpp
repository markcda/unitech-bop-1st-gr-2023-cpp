#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> D;
  for (int i = 0; i < n; i++) {
    vector<int> l;
    for (int j = 0; j < n; j++) l.push_back(0);
    D.push_back(l);
  }
  D[0][0] = 2;
  D[n-1][n-1] = 2;
  D[1][0] = 1;
  D[0][1] = 1;
  D[n-1][n-2] = 1;
  D[n-2][n-1] = 1;
  return 0;
}
