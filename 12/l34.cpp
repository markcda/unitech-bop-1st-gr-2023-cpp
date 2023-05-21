#include <iostream>
#include <cmath>
#include <vector>
#include <limits>
#include "matrix.hpp"
using namespace std;

int main() {
    cout << "input n:" << endl;
    int n;
    cin >> n;
    cout << "input B:" << endl;
    string tmp; getline(cin, tmp);
    auto B = read_matrix<float>(n, n);
    if (!B.valid) return 1;
    float max = numeric_limits<float>::min();
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) {
        if (j < i && j <= n/2) continue;
        else if (n - 1 - j > i && j >= n/2 + n%2) continue;
        if (B.m[i][j] > max) max = B.m[i][j];
    }
    cout << max << endl;
    return 0;
}
