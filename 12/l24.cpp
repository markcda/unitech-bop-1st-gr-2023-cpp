#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<int> read(int n) {
    cout << "needed " << n << " numbers" << endl;
    vector<int> v;
    int tmp;
    for (int i = 0; i < n; i++) {
        cout << "input num: ";
        cin >> tmp;
        v.push_back(tmp);
    }
    return v;
}

int main() {
    int n;
    cin >> n;
    auto y = read(n);
    if (y.size() != n) return 1;
    for (auto el : y) if (el % 2 == 1) cout << el * 2 << endl;
                      else             cout << el     << endl;
    return 0;
}
