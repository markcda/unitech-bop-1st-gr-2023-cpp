#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    vector<float> v;
    v.push_back(powf(cos(1), 2));
    v.push_back(-powf(sin(1), 2));
    for (int k = 2; k <= 100; k++)
        v.push_back(2*v[k-1] - v[k-2]);
    float sum = 0;
    for (int k = 1; k <= 100; k++) if (v[k] <= 2) sum += powf(v[k], 2);
    cout << sum << endl;
    return 0;
}
