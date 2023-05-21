#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float eps;
    cout << "Vvedite epsilon: ";
    cin >> eps;
    float x;
    cout << "Vvedite x: ";
    cin >> x;
    float k = 0.;
    float sum_prev = 0., sum_curr = 0.;
    do {
        sum_prev = sum_curr;
        sum_curr += powf(-x, 2 * k) / (2 * tgamma(k + 1));
    } while (abs(sum_curr - sum_prev) >= eps);
    cout << sum_curr << endl;
    return 0;
}
