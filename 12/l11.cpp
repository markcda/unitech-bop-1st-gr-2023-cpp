#include <iostream>
using namespace std;
int main() {
    float x = 0.16;
    float y = 0.88;
    if (x >= 0 && x <= 1 && y >= 0 && y <= 1) cout << "yes" << endl;
    else if (x <= 0 && x >= -1 && y <= 0 && y >= -1) cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}
