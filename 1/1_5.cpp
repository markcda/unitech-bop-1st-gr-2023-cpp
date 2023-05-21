#include <iostream>

using namespace std;

int main() {
    float a;
    cout << "Vvedite a: ";
    cin >> a;
    int n;
    cout << "Vvedite n: ";
    cin >> n;
    float mul = 1.;
    for (int i = 0; i < n; i++) mul *= (a - i);
    cout << mul << endl;
    return 0;
}
