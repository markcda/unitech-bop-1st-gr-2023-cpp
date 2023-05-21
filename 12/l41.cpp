#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "input str:" << endl;
    string s;
    getline(cin, s);
    for (auto &ch : s) {
        if (ch == '!') break;
        if (ch == 't') {
            cout << "yes" << endl;
            return 0;
        }
    }
    cout << "no" << endl;
    return 0;
}
