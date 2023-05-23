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
    cout << "b:" << endl;
    auto b = read_line<float>();
    vector<float> z;
    float min = abs(A[0][0]);
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) if (abs(A[i][j]) < min) min = abs(A[i][j]);
    if (min <= 1) min = 1;
    for (int i = 0; i < n; i++) z.push_back(b[i] / min);
    return 0;
}
