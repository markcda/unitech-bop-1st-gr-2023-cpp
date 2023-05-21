#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<float> a;
    for (int i = 0; i < n; i++) {
        a.push_back(
            float(i)/(i+2) + sin(float(pow(i-1, 3))/(i+1))
        );
    }
    float minpos = 100000000;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            cout << a[i] << endl;
            if (a[i] < minpos) minpos = a[i];
        }
    }
    cout << "Min: " << minpos << endl;
    return 0;
}
