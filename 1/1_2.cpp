#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float y;
    cout << "Vvedite y: ";
    cin >> y;
    for (float x = -4.7; x <= 0.2; x += 0.2) {
        auto b = (1 + x * x / 3 + y / 4) / (-sqrt(abs(y)));
        cout << x << "\t" << b << endl;
    }
    return 0;
}
