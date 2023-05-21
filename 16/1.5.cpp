#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double epsilon = 0.00001;
    double s = 0;
    double g;
    int n = 1;
    do {
        g = pow(-1, n+1)/(2*n-1);
        s += g;
    } while (abs(g) >= epsilon);
    cout << s << endl;
    cout << abs(s - M_PI/4) << endl;
    return 0;
}
