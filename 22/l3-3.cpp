#include <iostream>
#include <vector>
#include "matrix.hpp"

using namespace std;

float findmax(matrix<float> K) {
    float max = K.m[0][0];
    for (int i = 0; i < K.m.size(); i++) {
        for (int j = i + 1; j < K.m.size(); j++) {
            if (K.m[i][j] > max) max = K.m[i][j];
        }
    }
    return max;
}

int main() {
    cout << "Vvedite n:" << endl;
    int n;
    cin >> n;
    cout << "Vvedite A:" << endl;
    auto A = read_matrix<float>(n, n);
    if (!A.valid) return 1;
    cout << "Vvedite B:" << endl;
    auto B = read_matrix<float>(n, n);
    if (!B.valid) return 1;
    if (findmax(A) > findmax(B)) cout << 1 << endl;
    else cout << 0 << endl;
    return 0;
}
