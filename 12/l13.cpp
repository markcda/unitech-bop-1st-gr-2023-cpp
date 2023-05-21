#include <iostream>
using namespace std;
int main() {
    float x = 0.6;
    float y = 1.8;
    float z = -16.832;
    if (x >= y && x >= z) cout << "max: " << x << endl;
    else if (y >= z && y >= z) cout << "max: " << y << endl;
    else if (z >= x && z >= y) cout << "max: " << z << endl;
    if (x <= y && x <= z) cout << "min: " << x << endl;
    else if (y <= z && y <= z) cout << "min: " << y << endl;
    else if (z <= x && z <= y) cout << "min: " << z << endl;
    return 0;
}
