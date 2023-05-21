#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<float> read(int n) {
    cout << "needed " << n << " numbers" << endl;
    vector<float> v;
    float tmp;
    for (int i = 0; i < n; i++) {
        cout << "input num: ";
        cin >> tmp;
        v.push_back(tmp);
    }
    return v;
}

int main() {
    auto a = read(20);
    if (a.size() != 20) return 1;
    vector<float> b;
    for (int i = 0; i < 20; i++) b.push_back(0);
    for (int i = 12, k = 0; i <= 20; i += 2, k += 2) b[k] = a[i];
    for (int i = 2, k = 1; i <= 10; i += 2, k += 2) b[k] = a[i];
    for (int i = 0; i < 20; i++) cout << b[i] << endl;
    return 0;
}
