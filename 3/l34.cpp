#include <iostream>
#include <limits>
#include <sstream>
#include <cmath>
#include <vector>

using namespace std;

template<typename num> vector<num> read_line() {
  vector<num> v;
  string s;
  getline(cin, s);
  stringstream ss;
  ss << s;
  num found;
  string temp;
  while (not ss.eof()) {
    ss >> temp;
    if (stringstream(temp) >> found) v.push_back(found);
    temp = "";
  }
  return v;
}

int main() {
  auto v = read_line<int>();
  if (v.size() != 64) return 1;
  const int n = 8;
  vector<vector<int>> M;
  for (int i = 0; i < n; i++) {
    vector<int> l;
    for (int j = 0; j < n; j++) l.push_back(0);
    M.push_back(l);
  }
  int px = 0, py = n - 1;
  bool direction = true; // `false` is down-right, `true` is controversial, e.g. up-left
  bool one_step_done = false;
  // Let's set the first element.
  M[px][py] = v[0];
  for (int pos = 1; pos < n * n; pos++) {
    if (px == 0 and py != 0 and direction and not one_step_done) {
      direction = false;
      one_step_done = true;
      py--;
    } else if (px != 0 and px != (n - 1) and py == (n - 1) and not direction and not one_step_done) {
      direction = true;
      one_step_done = true;
      px++;
    } else if (py == 0 and direction and not one_step_done) {
      direction = false;
      one_step_done = true;
      px++;
    } else if (px == (n - 1) and not direction and not one_step_done) {
      direction = true;
      one_step_done = true;
      py--;
    } else {
      one_step_done = false;
      if (direction == false) {
        px++;
        py++;
      } else {
        px--;
        py--;
      }
    }
    // cout << "\tCurrent `(px, py)`: (" << px << ", " << py << "), the value is " << v[pos] << "." << endl;
    M[px][py] = v[pos];
  }
  cout << "matrix:" << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << "\t" << M[j][n-1-i];
    }
    cout << endl;
  }
  return 0;
}
