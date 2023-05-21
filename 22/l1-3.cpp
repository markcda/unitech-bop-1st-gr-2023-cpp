#include <iostream>

using namespace std;

int main() {
    float x = 214.8124;
    float y = 72.012;
    if (x < 0 && y < 0) {
        cout << abs(x) << "\t" << abs(y) << endl;
    } else if (x < 0 || y < 0) {
        cout << x + 0.5 << "\t" << y + 0.5 << endl;
    } else if (!(x >= 0.5 && x <= 2.0) && !(y >= 0.5 && y <= 2.0)) {
        cout << x/10 << "\t" << y/10 << endl;
    } else {
        cout << x << "\t" << y << endl;
    }
    return 0;
}
