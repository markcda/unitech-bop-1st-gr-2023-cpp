#include <iostream>
#include <cmath>

using namespace std;

int factorial(int k) {
    if (k <= 1)
        return 1;
    else
        return k * factorial(k-1);
}

int main()
{
    int n = 1000000;
    float s = 0;
    for (int k = 1; k <= n; k++)
    {
        s += pow(-1,k) / k / pow(factorial(k+1), 2);
    }
    cout << s << endl;
    return 0;
}
