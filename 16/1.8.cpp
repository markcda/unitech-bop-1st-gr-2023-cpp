#include <iostream>
#include <cmath>

using namespace std;

int factorial(int k) {
    if (k <= 1) return 1;
    else return k * factorial(k-1);
}

int main() {
    double epsilon = 0.00001;
    double x = 0.123;
    int m = 6, i = 0;
    double sum = 1, g;
    do {
        g = double(factorial(m)) / factorial(m + i + 1) / factorial(m - i - 1) * powf(x, i + 1);
        i++;
        sum += g;
    } while (abs(g) >= epsilon);
    return 0;
}
