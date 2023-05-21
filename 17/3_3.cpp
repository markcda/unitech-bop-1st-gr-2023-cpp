#include <iostream>
#include <vector>
#include <limits>
#include "matrix.hpp"

using namespace std;

vector<float> remove(vector<float> base, int num) {
  vector<float> n;
  for (int i = 0; i < num; i++) n.push_back(base[i]);
  for (int i = num+1; i < base.size(); i++) n.push_back(base[i]);
  return n;
}

int main() {
  cout << "Input n:" << endl;
  int n;
  cin >> n;
  cout << "Input b:" << endl;
  string tmp; getline(cin, tmp);
  auto b = read_line<float>();
  if (b.size() != n) return 1;
  cout << "Input k:" << endl;
  int k;
  cin >> k;
  auto b1 = remove(b, k);
  return 0;
}
