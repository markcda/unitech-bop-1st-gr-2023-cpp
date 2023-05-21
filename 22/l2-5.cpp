#include <iostream>
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
    int n;
    cout << "Vvedite n:";
    cin >> n;
    auto a = read_several(n);
    float max = a[0];
    for (int i = 1; i < n; i++) if (a[i] > max) max = a[i];
    for (int i = 0; i < n; i++) if (a[i] != max) a[i] *= max; else break;
    for (auto &el : a) cout << el << endl;
    return 0;
}
