#include <iostream>
#include "nstd_read.hpp"
using namespace std;

vector<int> fneg(vector<vector<float>> matrix) {
    vector<int> negs;
    for (auto &line : matrix) {
        bool neg = true;
        for (auto &el : line) if (el >= 0) { neg = false; break; }
        if (neg) negs.push_back(neg);
    }
    return negs;
}

int main() {
    int n;
    cout << "n:" << endl;
    cin >> n;
    cout << "A:" << endl;
    string tmp; getline(cin, tmp);
    vector<vector<float>> A;
    if (!read_matrix<float>(A, n, n)) return 1;
    auto negs = fneg(A);
    for (auto &el : negs) cout << el << endl;
    return 0;
}
