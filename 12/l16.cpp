#include <iostream>
#include <cmath>
using namespace std;
int factorial(int k) {
    if (k <= 1) return 1;
    else return k * factorial(k-1);
}
int main() {
    int n = 172;
    float x = -16.23;
    float sum = 0;
    for (int i = 1; i <= 172; i++) { sum += 1.0/factorial(i) + sqrt(abs(x)); }
    cout << sum << endl;
    return 0;
}
