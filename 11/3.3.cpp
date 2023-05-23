#include <iostream>
#include "nstd_read.hpp"

using namespace std;

float mul(const vector<float> &line)
{
    float m = 1;
    for (auto &el : line) if (abs(el) >= 1.1 and abs(el) <= 2.1) m *= el*el;
    return m;
}

int main()
{
    int n, m;
    cout << "n, m:" << endl;
    cin >> n >> m;
    string tmp; getline(cin, tmp);
    vector<vector<float>> A;
    if (!read_matrix<float>(A, n, m)) return 1;
    vector<float> b;
    for (auto &el : A) b.push_back(mul(el));
    return 0;
}
