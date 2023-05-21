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
    float mini = 0;
    for (int i = 1; i < n; i++) if (a[i] <= a[mini]) mini = i;
    float sum = 0;
    for (auto &el : a) sum += el;
    sum /= n;
    a[mini] = int(sum);
    for (int i = 0; i < n; i++) cout << a[i] << endl;
    return 0;
}
