#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float x = -1.23;
    float e = 0.001;
    float s = 0;
    float g = 1;
    for (int k = 1; g > e; k++) {
        g = x*x/powf(float(k), 1.5);
        s += g;
    }
    cout << s << endl;
    return 0;
}
