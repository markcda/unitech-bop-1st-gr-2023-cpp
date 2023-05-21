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
  int cntr = 0;
  for (int i = 0; i < n; i++) if (a[i] > 7) {
    a[i] = 7;
    cntr++;
  }
  for (auto el : a) cout << el << endl;
  cout << "Total: " << cntr << endl;
  return 0;
}
