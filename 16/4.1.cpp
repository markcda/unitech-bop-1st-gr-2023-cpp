#include <iostream>
#include <vector>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    for (int i = 1; i < s.size(); i++) {
        if (s[i-1] == ',' && s[i] == '-') {
            cout << "Da" << endl;
            return 1;
        }
    }
    cout << "Net" << endl;
    return 0;
}
