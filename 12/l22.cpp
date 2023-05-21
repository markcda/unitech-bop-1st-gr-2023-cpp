#include <iostream>
#include <cmath>
#include <limits>
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
    auto a = read(2*n);
    if (a.size() != 2*n) return 1;
    float min = numeric_limits<float>::max();
    vector<float> b;
    for (int i = 0; i < n; i++) b.push_back(a[i]*a[n+i]);
    for (float el : b) if (el < min) min = el;
    cout << min << endl;
    return 0;
}
