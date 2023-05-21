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
  float mul = 1;
  for (int i = 2; i < n; i++) mul *= (x[i-2] + 2*x[i-1] + x[i]);
  cout << mul << endl;
  return 0;
}
