#include <iostream>
#include <cmath>
#include <vector>
#include "matrix.hpp"
using namespace std;

float sum_row(matrix<float> M, int row_i) {
    float sum = 0;
    for (int i = 0; i < M.m.size(); i++) sum += M.m[i][row_i];
    return sum;
}

void mid(matrix<float> M) {
    for (int i = 0; i < M.m[0].size(); i++) cout << (sum_row(M, i) / M.m.size()) << endl;
}

int main() {
    cout << "input n, m:" << endl;
    int n, m;
    cin >> n >> m;
    cout << "input A:" << endl;
    string tmp; getline(cin, tmp);
    auto A = read_matrix<float>(m, n);
    if (!A.valid) return 1;
    mid(A);
    return 0;
}
