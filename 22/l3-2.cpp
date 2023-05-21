#include <iostream>
#include <vector>
#include "matrix.hpp"

using namespace std;

float s(matrix<float> C, int line) {
    float sum = 0;
    for (int i = 0; i < C.m[line].size(); i++)
        sum += C.m[line][i];
    return sum;
}

void sort(matrix<float> &C) {
    for (int i = 0; i < C.m.size(); i++)
        for (int j = i; j < C.m.size(); j++) {
            if (s(C, i) < s(C, j)) swap(C.m[i], C.m[j]);
        }
}

int main() {
    cout << "Vvedite n, m:" << endl;
    int n, m;
    cin >> n >> m;
    cout << "Vvedite C:" << endl;
    auto C = read_matrix<float>(n, m);
    if (!C.valid) return 1;
    sort(C);
    return 0;
}
