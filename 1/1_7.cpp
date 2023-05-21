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
    float a = 0., a_prev;
    int n = 1;
    do {
        n++;
        a_prev = a;
        a = sqrt(x) / (tgamma(n + 1) * tgamma(n + 2)); // tgamma: `Г(n) = (n - 1)!` for positive numbers
        cout << n << "\t" << a << endl;
    } while (abs(a - a_prev) >= eps);
    cout << n << endl;
    return 0;
}
