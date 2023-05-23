#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    bool found = false;
    for (int i = 0; i < s.size(); i++) {
        if (found) s[i] = '/';
        else if (s[i] == '*') found = true;
    }
    return 0;
}
