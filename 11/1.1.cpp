#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x;
    float y;
    cin >> x >> y;
    if (x >= 0 && x <= 2 && y <= 0 && (4 - x*x) >= 0 && y*y <= (4 - x*x))
        cout << "da" << endl;
    else if (x >= 2 && x <= 4 && (4 - powf(x-4,2)) >= 0 && y >= 0 && y*y <= (4 - powf(x-4,2)))
        cout << "da" << endl;
    else if (x >= 4 && x <= 6 && y >= 0 && y <= 2)
        cout << "da" << endl;
    else cout << "net" << endl;
    return 0;
}
