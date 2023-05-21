#include <iostream>
#include <vector>

using namespace std;

int main() {
    string s = "test123123";
    int f = 3, t = 2;
    string s1;
    for (int i = 0; i < f; i++) s1.push_back(s[i]);
    for (int i = 0; i < t; i++) s1.push_back(' ');
    for (int i = f; i + t < s.size(); i++) s1.push_back(s[i]);
    cout << s1 << endl;
    return 0;
}
