#include <iostream>
#include "nstd_read.hpp"
using namespace std;

float fmin(vector<float> line) {
    float min = line[0];
    for (auto &el : line) if (min > el) min = el;
    return min;
}

void mknew(vector<vector<float>> &old) {
    for (int i = 0; i < old.size(); i++)
        for (int j = i + 1; j < old.size(); j++)
            if (fmin(old[i]) > fmin(old[j]))
                swap(old[i], old[j]);
}

int main() {
    int n, m;
    cout << "n,m:" << endl;
    cin >> n >> m;
    cout << "B:" << endl;
    string tmp; getline(cin, tmp);
    vector<vector<float>> B;
    if (!read_matrix<float>(B, n, m)) return 1;
    mknew(B);
    return 0;
}
