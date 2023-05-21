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
    auto a = read(20);
    vector<float> b;
    for (int i = 0; i < 22; i++) b.push_back(0);
    for (int i = 0, j = 19; i < 22 && j >= 9; i += 2, j -= 1) b[i] = a[j];
    for (int i = 1, j = 10; i < 22 && j >= 0; i += 2, j -= 1) b[i] = a[j];
    for (int i = 0; i < 22; i++) cout << b[i] << endl;
    return 0;
}
