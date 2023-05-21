#include <iostream>

using namespace std;

int main() {
    float x, y;
    cout << "Vvedite x, y: " << endl;
    cin >> x >> y;
    if (x >= -1 && x <= 0 && (y*y) <= (1-x*x))
        cout << "Da" << endl;
    else if (x >= 0 && x <= 1 && abs(y) <= (1-x))
        cout << "Da" << endl;
    else cout << "Net" << endl;
    return 0;
}
