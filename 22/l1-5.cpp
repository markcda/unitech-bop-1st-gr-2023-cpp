#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float x = 23.21;
    float s = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        float s1 = x;
        for (int j = 1; j <= i; j++) s1 = sin(s1);
        s += s1;
    }
    cout << s << endl;
    return 0;
}
