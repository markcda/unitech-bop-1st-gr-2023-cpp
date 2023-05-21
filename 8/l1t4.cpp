#include <iostream>
#include <limits>
#include <cmath>
using namespace std;

int main() {
    float maxy = numeric_limits<float>::min();
    float y;
    for (float x = -4.2; x < 4.201; x += 0.2) {
        cout << x << "\t";
        y = sin(3 * tan(x) + sqrt(abs(x)));
        if (y > maxy)
            maxy = y;
        cout << y << endl;
    }
    cout << "max_y: " << maxy << endl;
    return 0;
}
