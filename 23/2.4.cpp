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
  auto a = read(n);
  for (int i = 0; i < n; i++) {
    if (a[i] < 0) a[i] += 0.5;
    else a[i] = 0.1;
    cout << a[i] << endl;
  }
  return 0;
}
