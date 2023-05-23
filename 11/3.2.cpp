#include <iostream>
#include "nstd_read.hpp"

using namespace std;

float sum(const vector<float> &line, int diagindex, bool before)
{
    float s = 0;
    if (before) for (int i = 0; i < diagindex; i++) s += line[i];
    else for (int i = diagindex + 1; i < line.size(); i++) s += line[i];
    return s;
}

int main()
{
    int n;
    cout << "n:" << endl;
    cin >> n;
    string tmp; getline(cin, tmp);
    vector<vector<float>> B;
    if (!read_matrix<float>(B, n, n)) return 1;
    vector<float> a;
    for (int i = 0; i < n; i++)
    {
        if (B[i][i] < 0) a.push_back(sum(B[i], i, true));
        else a.push_back(sum(B[i], i, false));
    }
    return 0;
}
