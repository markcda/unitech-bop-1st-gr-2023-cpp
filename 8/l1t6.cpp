#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double s = 0;
    for (int i = 1; i <= 10000; i++) {
        s += pow(-1, i + 1) * 1.0 / i;
    }
    cout << s << endl;
    return 0;
}
