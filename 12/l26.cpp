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
    float p = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] > i + 1 && a[i] < i + 2) p *= a[i];
    }
    cout << 1.0/p << endl;
    return 0;
}
