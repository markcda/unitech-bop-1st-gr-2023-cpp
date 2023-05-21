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
    int n;
    cin >> n;
    auto a = read(n);
    if (a.size() != n) return 1;
    float min = a[1], max = a[0];
    for (int i = 1; i < n; i += 2) if (a[i] < min) min = a[i];
    for (int i = 0; i < n; i += 2) if (a[i] > max) max = a[i];
    cout << min + max << endl;
    return 0;
}
