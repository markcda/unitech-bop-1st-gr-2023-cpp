#include <iostream>
#include <vector>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int cntr = 0;
    for (auto ch : s) if (ch == '+' or ch == '-' or ch == '*') cntr++;
    cout << cntr << endl;
    return 0;
}
