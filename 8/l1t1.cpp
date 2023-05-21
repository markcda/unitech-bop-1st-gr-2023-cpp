#include <iostream>
using namespace std;

int main() {
    cout << "x, y:" << endl;
    float x, y;
    cin >> x >> y;
    if (abs(x) + abs(y) >= y)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
