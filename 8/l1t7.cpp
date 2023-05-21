#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double eps = 0.0005;
    double a, b;
    cout << "a, b:" << endl;
    cin >> a >> b;
    double x_prev, x_curr = 0.0;
    int n = 1;
    do {
        x_prev = x_curr;
        x_curr = 0.5 * a - b * sin(0.5 * n++);
    } while(abs(x_prev - x_curr) >= eps);
    cout << x_curr << endl;
    return 0;
}
