#include <iostream>
#include <limits>

#include "matrix.hpp"

using namespace std;

int mul_line(const matrix<int> &matr, size_t line_index) {
    int mul = 1;
    for (size_t i = 0; i < matr.m[line_index].size(); i++) mul *= matr.m[line_index][i];
    return mul;
}

matrix<int> sum(const matrix<int> &M, const matrix<int> &N) {
    matrix<int> K = M;
    for (size_t i = 0; i < K.m.size(); i++) {
        auto mul = mul_line(N, i);
        for (size_t j = 0; j < K.m[i].size(); j++) {
            K.m[i][j] += mul;
        }
    }
    return K;
}

int main() {
    int n;
    cout << "Vvedite n:" << endl;
    cin >> n;
    int m;
    cout << "Vvedite m:" << endl;
    cin >> m;
    cout << "Vvedite matritsu 'A' (n x m):" << endl;
    string tmp; getline(cin, tmp);
    auto A = read_matrix<int>(m, n);
    if (not A.valid) return 1;
    if (A.m.size() != size_t(m) or A.m[0].size() != size_t(n)) return 1;
    cout << "Vvedite matritsu 'B' (n x m):" << endl;
    auto B = read_matrix<int>(m, n);
    if (not B.valid) return 1;
    if (B.m.size() != size_t(m) or B.m[0].size() != size_t(n)) return 1;
    auto K = sum(A, B);
    cout << "Matrica:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "\t" << K.m[i][j];
        }
        cout << endl;
    }
    return 0;
}
