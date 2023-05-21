#include <iostream>

using namespace std;

int main() {
    double u, v;
    cout << "Vvedite u, v: ";
    cin >> u >> v;
    double ai, bi;
    double ain = u, bin = v;
    int n;
    cout << "Vvedite n: ";
    cin >> n;
    int i = 1;
    do {
        ai = ain;
        bi = bin;
        ain = 2*bi + ai;
        bin = 2*ai*ai + bi;
        i++;
    } while (i <= n);
    cout << ain << endl;
    cout << bin << endl;
    return 0;
}
