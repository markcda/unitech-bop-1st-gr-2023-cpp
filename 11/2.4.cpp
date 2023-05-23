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
    int neg = 0, cr12 = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) neg++;
        else if (a[i] >= 1 and a[i] <= 2) cr12++;
        else a[i] = 1;
    }
    for (auto &el : a) cout << el << endl;
    cout << "neg: " << neg << endl << "[1,2]: " << cr12 << endl;
    return 0;
}
