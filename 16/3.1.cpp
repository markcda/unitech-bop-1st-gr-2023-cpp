#include <iostream>
#include <vector>
#include "matrix.hpp"

using namespace std;

int main() {
    cout << "Vvedite n:" << endl;
    int n;
    cin >> n;
    cout << "Vvedite chisla iz a:" << endl;
    string tmp; getline(cin, tmp);
    auto a = read_line<int>();
    if (a.size() != n) return 1;
    cout << "Vvedite chisla iz b:" << endl;
    auto b = read_line<int>();
    if (b.size() != n) return 1;
    bool eq = true;
    for (int i = 0; i < n; i++) if (a[i] != b[i]) { eq = false; break; }
    vector<int> c;
    if (eq) for (int i = 0; i < n; i++) c.push_back(a[i] + b[i]);
    else c = a;
    return 0;
}
