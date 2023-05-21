#include <iostream>
#include <cmath>

using namespace std;

int factorial(int k) {
    if (k == 1) return 1;
    else return factorial(k - 1) * k;
}

int main() {
    double s = 0;
    int n = 723;
    for (int k = 0; k <= n; k++) {
        s += double(pow(-1, k) * (k + 1)) / factorial(k);
    }
    cout << s << endl;
    return 0;
}
