#include <iostream>
#include "nstd_read.hpp"

using namespace std;

int main()
{
    int n;
    cout << "n:" << endl;
    cin >> n;
    string tmp; getline(cin, tmp);
    vector<vector<float>> B;
    if (!read_matrix<float>(B, n, n)) return 1;
    float max = B[0][0];
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++)
    {
        if (i <= n/2 and j <= n/2 and i <= j) { if (B[i][j] > max) max = B[i][j]; }
        else if (i > n/2 and j <= n/2 and (n-1-i) <= j) { if (B[i][j] > max) max = B[i][j]; }
        else if (i <= n/2 and j > n/2 and (n-1-j) >= i) { if (B[i][j] > max) max = B[i][j]; }
        else { if (B[i][j] > max) max = B[i][j]; }
    }
    cout << max << endl;
    return 0;
}
