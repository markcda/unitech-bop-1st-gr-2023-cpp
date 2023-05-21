#include <iostream>
#include <limits>

#include "matrix.hpp"

using namespace std;

int main() {
    int n;
    cout << "Vvedite n:" << endl;
    cin >> n;
    cout << "Vvedite matritsu 'A' (N x N):" << endl;
    string tmp; getline(cin, tmp);
    auto A = read_matrix<float>(n, n);
    if (not A.valid) return 1;
    cout << "Vvedite vector 'b' (N elementov):" << endl;
    auto b = read_line<float>();
    if (b.size() != size_t(n)) return 1;
    float max = numeric_limits<float>::min();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (A.m[i][j] > max) max = A.m[i][j];
        }
    }
    float min = numeric_limits<float>::max();
    for (auto &el : b) {
        if (el > 0 and min > el) min = el;
    }
    auto d = max / min;
    cout << d << endl;
    return 0;
}
