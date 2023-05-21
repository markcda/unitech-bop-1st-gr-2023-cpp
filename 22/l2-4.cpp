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
    int ks = 0;
    for (int i = 1; i < a.size(); i++) {
        if (a[i] > 0 && a[i-1] > 0 && abs(a[i-1]) > abs(a[i])) ks++;
        else if (a[i] < 0 && a[i-1] < 0 && abs(a[i-1]) > abs(a[i])) ks++;
    }
    cout << ks << endl;
    return 0;
}
