#include <iostream>
#include <cmath>
#include "nstd_read.hpp"
using namespace std;

int main() {
    int n;
    cout << "n:" << endl;
    cin >> n;
    string tmp; getline(cin, tmp);
    auto a = read_line<float>();
    if (a.size() != n) return 1;
    float max = -a[0], curr;
    for (int i = 0; i < n; i++) {
        curr = pow(-1, i+1) * a[i];
        if (curr > max) max = curr;
    }
    cout << max << endl;
    return 0;
}
