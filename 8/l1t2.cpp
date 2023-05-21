#include <iostream>
using namespace std;

int main() {
    for (float x = -3.2; x < 3.401; x += 0.2) {
        cout << x << "\t" << x - x*x / 2 - x*x*x / 3 << endl;
    }
    return 0;
}
