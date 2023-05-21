#include <iostream>
#include <limits>
#include <vector>

using namespace std;

vector<float> read_several(int n) {
    cout << "Vvedite " << n << " chisel." << endl;
    vector<float> vc;
    float j;
    for (int i = 0; i < n; i++) {
        cout << "Vvedite chislo: ";
        cin >> j;
        vc.push_back(j);
    }
    return vc;
}

int main() {
    auto a = read_several(30);
    float max = numeric_limits<float>::min();
    for (int i = 0; i < 15; i++) if ((a[i] + a[29-i]) > max) max = a[i] + a[29-i];
    cout << max << endl;
    return 0;
}
