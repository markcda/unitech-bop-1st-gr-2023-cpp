#include <iostream>

using namespace std;

int main() {
    float a, b, c, d;
    cout << "Vvedite a, b, c, d: ";
    cin >> a >> b >> c >> d;
    if ((a < c and b < d) or (a < d and b < c)) cout << "Da" << endl;
    else cout << "Net" << endl;
    return 0;
}
