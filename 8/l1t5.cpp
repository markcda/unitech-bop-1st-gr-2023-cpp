#include <iostream>
using namespace std;

int main() {
    double a;
    cout << "a:" << endl;
    cin >> a;
    double sum = 1;
    int divisor = 2;
    while (sum < a) {
        sum += 1.0 / divisor++;
    }
    cout << "first: " << sum << endl;
    return 0;
}
