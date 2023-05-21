#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float p = 1;
    int n = 10;
    float x = 0.16;
    for (int k = 1; k <= n; k++) {
        int kf = 1;
        for (int i = 2; i < k; i++) kf *= i;
        p *= (powf(1-x, k) + 1)/(kf + 1);
    }
    cout << p << endl;
    return 0;
}
