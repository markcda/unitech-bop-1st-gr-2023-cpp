#include <iostream>
#include "nstd_read.hpp"
using namespace std;

int main() {
    int n;
    cout << "n:" << endl;
    cin >> n;
    cout << "A:" << endl;
    string tmp; getline(cin, tmp);
    vector<vector<float>> A;
    if (!read_matrix<float>(A, n, n)) return 1;
    float max = A[0][n-1];
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) {
        if (j >= n/2) {
            if (i <= n/2 and (n-1-j) <= i) { if (A[i][j] > max) max = A[i][j]; }
            else if (i > n/2 and i <= j) { if (A[i][j] > max) max = A[i][j]; }
        }
    }
    cout << max << endl;
    return 0;
}
