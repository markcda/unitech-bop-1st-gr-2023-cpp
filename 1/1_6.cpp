#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cout << "Vvedite n: ";
    cin >> n;
    int sum = 0;
    for (int k = 1; k <= n; k++) {
        int sub_sum = 0;
        for (int i = 1; i <= n; i++) sub_sum += pow(k - i, 2);
        sum += sub_sum * pow(k, 3);
    }
    cout << sum << endl;
    return 0;
}
