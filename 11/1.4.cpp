#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float max = cos(5.0/4.0*0.25);
    float y;
    for (float x = -0.5; x <= 0.501; x+= 0.1)
    {
        y = cos(5.0/4.0*x*x);
        if (y > max)
            max= y;
        cout << x << "\t" << y << endl;
    }
    cout << max << endl;
    return 0;
}
