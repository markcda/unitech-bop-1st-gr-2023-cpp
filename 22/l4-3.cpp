#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "Vvedite s1:" << endl;
    string s1;
    getline(cin, s1);
    cout << "Vvedite s2:" << endl;
    string s2;
    getline(cin, s2);
    if (s1 < s2) cout << "s1 < s2" << endl;
    else if (s1 > s2) cout << "s1 > s2" << endl;
    else cout << "s1 == s2" << endl;
    return 0;
}
