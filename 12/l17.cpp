#include <iostream>
using namespace std;
int main() {
    float x1 = 1, x2 = 1;
    int n = 160, i = 3;
    float x3;
    do { x3 = x1 + x2; x1 = x2; x2 = x3; i++; } while (i <= n);
    cout << x3 << endl;
    return 0;
}
