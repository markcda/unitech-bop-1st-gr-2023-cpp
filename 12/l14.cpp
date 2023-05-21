#include <iostream>
#include <cmath>
#include <limits>
using namespace std;
int main() {
    float min = numeric_limits<float>::max();
    for (float x = -1.2; x <= 1.50001; x+=0.1) {
        cout << x;
        float y = cos(tan(x*x))+0.25;
        cout << "\t" << y << endl;
        if (y < min) min= y;
    }
    cout << min << endl;
    return 0;
}
