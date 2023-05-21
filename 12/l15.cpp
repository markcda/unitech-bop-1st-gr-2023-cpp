#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a, s = 0;
    float x = 0.16;
    float e = 0.0001;
    int n = 1;
    do { a = pow(-1, n + 1) * x / n; n++; s += a; } while (abs(a) >= e);
    cout << s << endl;
    return 0;
}
