#include <iostream>
#include "nstd_read.hpp"

using namespace std;

int main()
{
    int n;
    cout << "n:" << endl;
    cin >> n;
    string tmp; getline(cin, tmp);
    vector<vector<float>> matrix;
    if (!read_matrix<float>(matrix, n, n)) return 1;
    float max = matrix[0][0];
    int ypos = 0, xpos = 0;
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) if (matrix[i][j] > max)
    {
        max = matrix[i][j];
        ypos = i;
        xpos = j;
    }
    if (ypos != 0) swap(matrix[ypos], matrix[0]);
    if (xpos != 0)
    {
        for (int i = 0; i < n; i++)
        {
            swap(matrix[i][xpos], matrix[i][0]);
        }
    }
    cout << matrix[0][0] << endl;
    return 0;
}
