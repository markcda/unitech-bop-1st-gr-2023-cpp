#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int b = 0, m = 0;
    float y;
    for (float x = -0.7; x <= 0.7; x+=0.1) {
        y = x * cos(2*x);
        cout << x << "\t" << y << endl;
        if (y > 0) b++;
        else if (y < 0) m++;
    }
    cout << b << endl;
    cout << m << endl;
    return 0;
}
