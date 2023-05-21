#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float x, y;
    cout << "Vvedite x, y: ";
    cin >> x >> y;
    if (x <= 0 and y >= 0 and (y * y) <= (1 - x * x)) {
        cout << "Da" << endl;
    } else if (x >= 0 and y <= 0 and (y * y) <= (1 - x * x)) {
        cout << "Da" << endl;
    } else cout << "Net" << endl;
    return 0;
}
