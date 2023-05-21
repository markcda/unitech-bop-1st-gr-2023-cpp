#include <iostream>
#include <vector>

using namespace std;

vector<float> read_line(int n) {
  cout << "Input " << n << " numbers." << endl;
  vector<float> v;
  float tmp;
  for (int i = 0; i < n; i++) {
    cout << "Input num: ";
    cin >> tmp;
    v.push_back(tmp);
  }
  return v;
}

int main() {
  int n;
  cout << "Input n: ";
  cin >> n;
  vector<float> x = read_line(3 * n);
  float sum = 0;
  for (int i = n; i < 3 * n; i++) {
    bool b = true;
    for (int j = 0; j < n; j++) {
      if (x[i] <= x[j]) {
        b = false;
        break;
      }
    }
    if (b) sum += x[i];
  }
  cout << sum << endl;
  return 0;
}
