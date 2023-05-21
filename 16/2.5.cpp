#include <iostream>
#include <vector>
#include <limits>

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
    int k, n;
    cin >> k >> n;
    auto a = read(k*n);
    float min = numeric_limits<float>::max();
    for (int i = 0; i < n; i++) {
        float max = numeric_limits<float>::min();
        for (int j = 0; j < k; j++) {
            if (a[k*i+j] > max) max = a[k*i+j];
        }
        if (max < min) min = max;
    }
    cout << min << endl;
    return 0;
}
