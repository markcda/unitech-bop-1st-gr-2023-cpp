#include <iostream>
#include <vector>

using namespace std;

vector<float> read(int n) {
    vector<float> nums;
    float x;
    for (int i = 0; i < n; i++) {
        cout << "Vvedite chislo: ";
        cin >> x;
        nums.push_back(x);
    }
    return nums;
}

int main() {
    int n;
    cin >> n;
    cout << "a" << endl;
    auto a = read(n);
    cout << "b" << endl;
    auto b = read(n);
    if (a.size() != b.size()) return 0;
    vector<float> c;
    for (int i = 0; i <= n; i++) c.push_back(0);
    for (int i = n-1; i >= 0; i--) {
        c[i] = a[i] / (b[i] - c[i+1]);
    }
    for (int i = 0; i <= n; i++) cout << c[i] << endl;
    return 0;
}
