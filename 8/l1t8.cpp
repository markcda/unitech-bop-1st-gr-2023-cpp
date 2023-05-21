#include <iostream>
#include <cmath>
using namespace std;

int fct(int k) {
    if (k <= 1) return 1;
    else return k * fct(k-1);
}

int main() {
    double x, eps;
    cout << "x, eps:" << endl;
    cin >> x >> eps;
    double sum = 0.0;
    double nw;
    int k = 0;
    do {
        nw = pow(-1, k) * powf(x, 2*k + 1) / (fct(k) * (2*k + 1));
        sum += nw;
    } while (abs(nw) >= eps);
    return 0;
}
