#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float y = 0.6;
    for (float x = -2.5; x <= 0.51; x+= 0.1)
    {
        cout << x << "\t" << (1+powf(cos(x+y), 2.0)) / (2+abs(x-sin(x))) << endl;
    }
    return 0;
}
