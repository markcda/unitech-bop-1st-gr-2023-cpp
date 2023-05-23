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
    float p = 1;
    for (auto &el : a) {
        if (el >= 0) p *= el;
        else break;
    }
    cout << powf(p, 1.0/n) << endl;
    return 0;
}
