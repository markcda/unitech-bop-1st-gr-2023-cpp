#include <iostream>
#include <vector>
using namespace std;

vector<int> read(int n) {
  cout << "Input " << n << " numbers from a new line." << endl;
  vector<int> vec;
  int tmp;
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
  int neven = 0;
  for (int i = 0; i < n; i++) if (a[i] % 2 == 0) { neven = i + 1; break; }
  cout << neven << endl;
  return 0;
}
