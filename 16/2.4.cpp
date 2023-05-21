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
    auto q = read(n);
    for (auto num : q) {
        if (num < 5.0/3) cout << num << endl;
    }
    return 0;
}
