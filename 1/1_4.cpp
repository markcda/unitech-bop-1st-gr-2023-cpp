#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float x = -1.7, z = 0.;
    int z_ab_zero = 0, z_bel_zero = 0;
    for (float c = -2.1; c <= 3.2; c += 0.2) {
        z = powf(sin(abs(c * powf(x, 3.) + powf(x, 2.))), 3.) / (abs(c * powf(x, 3.) - powf(x, 2.)) + 3.14);
        if (z > 0) z_ab_zero++;
        else if (z < 0) z_bel_zero++;
        cout << c << "\t" << z << endl;
    }
    cout << "> 0: " << z_ab_zero << endl;
    cout << "< 0: " << z_bel_zero << endl;
    return 0;
}
