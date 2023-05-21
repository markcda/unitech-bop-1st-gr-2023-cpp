#include <iostream>
#include <vector>
#include "matrix.hpp"

using namespace std;

int main() {
    cout << "Vvedite n:" << endl;
    int n;
    cin >> n;
    cout << "Vvedite A:" << endl;
    auto A = read_matrix<int>(n, n);
    if (!A.valid) return 1;
    cout << "Vvedite b:" << endl;
    auto b = read_line<int>();
    if (b.size() != n) return 1;
    for (int i = 0; i < n; i++) {
        if (b[i] > 0) {
            float s;
            for (int j = 0; j < n; j++) s += A.m[i][j];
            cout << i << "\t" << s << endl;
        }
    }
    return 0;
}
