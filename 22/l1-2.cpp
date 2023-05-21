#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float z;
    float x;
    cout << "Vvedite x: " << endl;
    cin >> x;
    for (float y = -2.1; y <= 2.101; y += 0.1) {
        z = sin(y - sqrt(abs(x)))*(y - y/(x*x*x + x*x/4));
        cout << z << endl;
    }
    return 0;
}
