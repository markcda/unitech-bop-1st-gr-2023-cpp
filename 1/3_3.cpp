#include <iostream>
#include <limits>

#include "matrix.hpp"

using namespace std;

int min(vector<int> &line, size_t below) {
    int min = numeric_limits<int>::max();
    for (size_t i = 0; i <= below; i++) if (line[i] < min) min = line[i];
    return min;
}

int main() {
    cout << "Vvedite poryadok matricy:" << endl;
    int n;
    cin >> n;
    cout << "Vvedite A:" << endl;
    string tmp; getline(cin, tmp);
    auto A = read_matrix<int>(n, n);
    if (not A.valid) return 1;
    vector<int> b;
    for (size_t i = 0; i < size_t(n); i++) b.push_back(min(A.m[i], i));
    cout << "b:";
    for (auto &el : b) cout << " " << el;
    cout << endl;
    return 0;
}
