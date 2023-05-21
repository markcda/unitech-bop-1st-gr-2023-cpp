#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float e = 0.00001;
    float x = 1.7274;
    float sp, sc = 0;
    int k = 1;
    do {
        sp = sc;
        sc += pow(-1, k) * powf(x, k+1) / powf(float(k+1), 3);
        k++;
    } while (abs(sc-sp) >= e);
    cout << sc << endl;
    return 0;
}
