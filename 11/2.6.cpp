#include <iostream>
#include "nstd_read.hpp"

using namespace std;

int main()
{
    int n;
    cout << "n:" << endl;
    cin >> n;
    string tmp; getline(cin, tmp);
    auto a = read_line<int>();
    if (a.size() != n) return 1;
    bool oddfound = false, evenfound = false;
    for (auto &el : a) {
        if (el % 2 == 1) {
            oddfound = true;
        } else if (oddfound and el % 2 == 0) {
            evenfound = true;
            break;
        }
    }
    if (evenfound) {
        for (auto &el : a) if (el > 0) cout << el << endl;
    } else {
        for (auto &el : a) if (el < 0) cout << el << endl;
    }
    return 0;
}
