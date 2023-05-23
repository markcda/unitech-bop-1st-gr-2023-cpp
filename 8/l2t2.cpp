#include <iostream>
#include <cmath>
#include "nstd_read.hpp"
using namespace std;

int main() {
    vector<float> vec;
    float xf;
    for (int x = 0; x <= 5; x++) {
        xf = float(x);
        vec.push_back(powf(xf, 5) - 9*powf(xf, 4) + 1.7 * powf(xf, 2) - 9.6);
        cout << vec[x] << endl;
    }
    return 0;
}
