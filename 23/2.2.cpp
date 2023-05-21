#include <iostream>
#include <vector>
using namespace std;

vector<float> read(int n) {
  cout << "Input " << n << " numbers from a new line." << endl;
  vector<float> vec;
  float tmp;
  for (int i = 0; i < n; i++) {
    cout << "Input the next: ";
    cin >> tmp;
    vec.push_back(tmp);
  }
  return vec;
}

int main() {
  int n;
  cout << "Input n: ";
  cin >> n;
  auto x = read(n);
  auto y = read(n);
  float s = 0.0;
  for (int i = 0; i < n; i++) s += x[i]*y[i];
  cout << s << endl;
  return 0;
}
