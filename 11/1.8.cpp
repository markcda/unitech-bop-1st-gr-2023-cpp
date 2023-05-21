#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x = 1.324;
    float e = 0.0016;
    float g = 0;
    float r;
    int k = 1;
    do
    {
      r = pow(-1,k) * powf(x, k) / k;
      k++;
      g += r;
    } while (abs(r) >= e);
    cout << g << endl;
    return 0;
}
