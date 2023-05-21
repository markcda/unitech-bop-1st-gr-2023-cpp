#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float b;
    float x;
    cout << "Vvedite x: " << endl;
    cin >> x;
    for (float x = -5.6; x <= 0.001; x += 0.1) {
        b = 1 + powf(x, 3)/(3 + powf(x, 5)/5);
        cout << b << endl;
    }
    return 0;
}
