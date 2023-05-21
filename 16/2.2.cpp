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
    auto x = read(n);
    float p = 1;
    for (int i = 0; i < n-1; i++) p *= (1.0/(abs(x[i]) + 1) + x[i+1]);
    cout << p << endl;
    return 0;
}
