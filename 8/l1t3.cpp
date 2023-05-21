#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "x, y, z:" << endl;
    float x, y, z;
    cin >> x >> y >> z;
    if (x >= 0) cout << powf(x, 2.) << endl; else cout << x << endl;
    if (y >= 0) cout << powf(y, 2.) << endl; else cout << y << endl;
    if (z >= 0) cout << powf(z, 2.) << endl; else cout << z << endl;
    return 0;
}
