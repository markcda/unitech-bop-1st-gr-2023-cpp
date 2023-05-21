#include <iostream>
#include <cmath>
#include <vector>
#include <limits>
#include "matrix.hpp"
using namespace std;

int main() {
    cout << "input n:" << endl;
    int n;
    cin >> n;
    cout << "input C:" << endl;
    string tmp; getline(cin, tmp);
    auto C = read_matrix<int>(n, n);
    if (!C.valid) return 1;
    int max = numeric_limits<int>::min();
    int xpos, ypos;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            int c = C.m[i][j];
            if (c < 0 && c > max) {
                max = c;
                xpos = i;
                ypos = j;
            }
        }
    int t = C.m[0][0];
    C.m[0][0] = C.m[xpos][ypos];
    C.m[xpos][ypos] = t;
    return 0;
}
