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
    auto y = read(n);
    if (y.size() != n) return 1;
    vector<float> z;
    for (auto el : y) {
        if (abs(el) < 1) z.push_back(el);
        else z.push_back(1.0/el);
    }
    float s = 0;
    for (auto el : y) s += powf(el, 2);
    cout << s << endl;
    return 0;
}
