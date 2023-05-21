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
  int neg = n-1;
  for (int i = 0; i < n; i++) if (a[i] < 0) { neg = i; break; }
  float max = a[0];
  for (int i = 1; i < neg; i++) if (a[i] > max) max = a[i];
  cout << max*max*max << endl;
  return 0;
}
