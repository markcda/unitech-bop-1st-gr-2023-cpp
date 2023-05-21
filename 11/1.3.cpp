#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    if (a >= b && b >= c)
        cout << a*2 << "\t" << b*2 << "\t" << c*2 << endl;
    else
        cout << abs(a) << "\t" << abs(b) << "\t" << abs(c) << endl;
    return 0;
}
