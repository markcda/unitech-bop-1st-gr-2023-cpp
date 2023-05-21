#include <iostream>

using namespace std;

int main() {
    double x, y;
    cin >> x >> y;
    if (x >= -2 && x <= 0 && y <= 0 && y >= -x-2)
        cout << "true" << endl;
    else if (x >= 0 && x <= 2 && y <= 0 && y >= x-2)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}
