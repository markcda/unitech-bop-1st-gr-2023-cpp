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
    for (int i = 0; i < n; i++) {
        bool once = true;
        for (int j = 0; j < n; j++) {
            if (i != j and a[i] == a[j]) {
                once = false;
                break;
            }
        }
        if (once) cout << a[i] << endl;
    }
    return 0;
}
