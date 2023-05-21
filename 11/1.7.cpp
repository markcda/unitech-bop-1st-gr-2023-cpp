#include <iostream>

using namespace std;

int main()
{
    float a1 = 0.16;
    float b1 = 0.72;
    float ap = a1, bp = b1;
    float ac, bc;
    int n;
    cin >> n;
    for (int k = 2; k <= n; k++)
    {
        ac = 2*bp + 2*a1;
        bc = 2*ap*ap + 3*b1;
        ap = ac;
        bp = bc;
    }
    cout << ac << endl;
    cout << bc << endl;
    return 0;
}
