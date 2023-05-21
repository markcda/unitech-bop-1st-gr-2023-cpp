#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float y;
    float min = cos(-2.1)/(4-sqrt(11)) + sin(-2.1)/(3 + sqrt(7));
    for (float x = -2.1; x <= 2.101; x+= 0.2) {
        y = cos(x)/(4-sqrt(11)) + sin(x)/(3 + sqrt(7));
        cout << x << "\t" << y << endl;
        if (y < min) min = y;
    }
    cout << min << endl;
    return 0;
}
