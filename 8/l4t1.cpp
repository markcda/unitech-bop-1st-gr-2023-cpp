#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    bool opened = false;
    string s1;
    for (auto &ch : s) {
        if (ch == '(') opened = true;
        else if (ch == ')') opened = false;
        else if (opened) continue;
        else s1.push_back(ch);
    }
    cout << s1 << endl;
    return 0;
}
