#include <iostream>
#include "nstd_read.hpp"
using namespace std;

int main() {
    int n;
    cout << "n:" << endl;
    cin >> n;
    string tmp; getline(cin, tmp);
    auto a = read_line<float>();
    if (a.size() != n) return 1;
    for (int j = 1; j < n - 1; j++) {
        if (a[j] > a[j-1] and a[j] > a[j+1]) cout << j << endl;
    }
    return 0;
}
