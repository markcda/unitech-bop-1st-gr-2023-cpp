#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x = 0.16, e = 0.05;
    float g = 0;
    float r;
    int n = 1;
    do
    {
        r = cos(2*n*x) / (2*n-1) / (2*n+1);
        n++;
        g += r;
    } while(abs(r) >= e);
    cout << g << endl;
    return 0;
}
