#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    for (float h = 0.5; h <= 5.01; h += 0.5) {
        cout << h << "\t" << sqrt(1.0/(M_PI * h)) << endl;
    }
    return 0;
}
