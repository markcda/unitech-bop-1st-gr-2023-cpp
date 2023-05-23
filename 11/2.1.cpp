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
    if (a.size() != 2*n) return 1;
    vector<float> a1;
    for (int i = 0; i < n; i++) {
        a1.push_back(a[i] + a[n-1-i]);
    }
    for (auto &el : a1) cout << el << endl;
    return 0;
}
