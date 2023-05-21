#include <iostream>
#include <vector>
#include "matrix.hpp"

using namespace std;

int main() {
    cout << "Vvedite n:" << endl;
    int n;
    cin >> n;
    cout << "Vvedite chisla iz a:" << endl;
    string tmp; getline(cin, tmp);
    auto a = read_line<float>();
    if (a.size() != n) return 1;
    cout << "Vvedite matricu A:" << endl;
    auto A = read_matrix<float>(n, n);
    if (!A.valid) return 1;
    vector<vector<float>> B;
    for (int i = 0; i < n; i++) {
        if (A.m[i][0] < a[0]) B.push_back(A.m[i]);
        else break;
    }
    B.push_back(a);
    for (int i = 0; i < n; i++) {
        if (A.m[i][0] <= a[0]) continue;
        else B.push_back(A.m[i]);
    }
    return 0;
}
