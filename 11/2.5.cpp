#include <iostream>
#include "nstd_read.hpp"

using namespace std;

int main()
{
    int n;
    cout << "n:" << endl;
    cin >> n;
    string tmp; getline(cin, tmp);
    auto a = read_line<float>();
    if (a.size() != n) return 1;
    vector<float> b;
    for (int i = 0; i < n; i++) {
        float sr = 0;
        for (int j = 0; j < n; j++) if (i != j) sr += a[j];
        sr /= (n - 1);
        b.push_back(sr);
    }
    for (auto &el : b) cout << el << endl;
    return 0;
}
