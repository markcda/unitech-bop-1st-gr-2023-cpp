#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

template<typename T> vector<T> read_line() {
  vector<T> v;
  string s;
  getline(cin, s);
  stringstream ss;
  ss << s;
  T found;
  string temp;
  while (not ss.eof()) {
    ss >> temp;
    if (stringstream(temp) >> found) {
      v.push_back(found);
    }
    temp = "";
  }
  return v;
}

int main() {
  // 1
  {
    auto a = read_line<float>();
    cout << a.at(a.size() - 1) << endl;
    for (int i = 0; i < a.size() - 1; i++) cout << a.at(i) << endl;
  }
  // 2
  {
    vector<float> t;
    float curr;
    for (int i = 0; i <= 100; i++) {
      curr = 9.0/5*i + 32;
      t.push_back(curr);
      cout << i << "\t" << curr << endl;
    }
  }
  // 3
  {
    int n;
    cin >> n;
    int curr;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
      curr = i*i + 3*i*n*n + n;
      if (curr % 2 == 1 and curr % 3 == 0) sum += curr;
    }
    cout << sum << endl;
  }
  // 4
  {
    int a;
    cin >> a;
    auto x = read_line<int>();
    bool found = false;
    for (int i = 0; i < x.size(); i++) if (x[i] == a) { found = true; cout << i + 1 << endl; break; }
    if (not found) cout << 0 << endl; 
  }
  // 5
  {
    auto a = read_line<float>();
    if (a[0] >= 0) {
      float min = a[0];
      for (const auto &el : a) if (min > el) min = el;
      for (auto &el : a) el *= min*min;
    } else {
      float max = a[0];
      for (const auto &el : a) if (max < el) max = el;
      for (auto &el : a) el *= max*max;
    }
    for (const auto &el : a) cout << el << endl;
  }
  // 6
  {
    auto a = read_line<float>();
    vector<float> b; b.reserve(10);
    for (int i = 0; i < 10; i++) b.push_back(0);
    for (int i = 0; i < 10; i++) {
      for (auto &el : a) if (el > i-1 and el <= i) b[i]++;
    }
    for (auto &el : b) cout << el << endl;
  }
  return 0;
}
