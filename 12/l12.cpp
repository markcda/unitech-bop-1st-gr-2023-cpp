#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float y = 1.6;
    for (float x = -3.2; x <= 3.20001; x+=0.1) {
        float z = (1 + cos(x*x + y))/(1+x*x*y*y);
        cout << z << endl;
    }
    return 0;
}
