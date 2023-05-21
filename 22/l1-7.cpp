#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Vvedite x:" << endl;
    float x;
    cin >> x;
    int n = 1;
    float a1, a2 = 1;
    float ep = 0.00001;
    do {
        a1 = a2;
        int nf = 1;
        for (int i = 2; i < n; i++) nf *= i;
        a2 = nf / powf(x, n);
        n++;
    } while (abs(a1 - a2) >= ep);
    cout << a2 << endl;
    return 0;
}
