#include <iostream>
#include <vector>
#include "matrix.hpp"

using namespace std;

float sum(matrix<float> &M, int i, int j) {
    int min, max;
    if (i >= j) { min = j; max = i; }
    else { max = j; min = i; }
    float s = 0;
    for (int a = min; a <= max; a++) for (int b = min; b <= max; b++) s += M.m[a][b];
    return s;
}

int main() {
    cout << "Vvedite n:" << endl;
    int n;
    cin >> n;
    cout << "Vvedite matricu A:" << endl;
    string tmp; getline(cin, tmp);
    auto A = read_matrix<float>(n, n);
    if (!A.valid) return 1;
    vector<vector<float>> B;
    for (int i = 0; i < n; i++) {
        vector<float> l;
        for (int j = 0; j < n; j++) l.push_back(sum(A, i, j));
        B.push_back(l);
    }
    return 0;
}
