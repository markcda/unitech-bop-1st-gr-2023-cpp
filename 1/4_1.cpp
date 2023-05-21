#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Vvedite stroku:" << endl;
    string s; getline(cin, s);
    string s1;
    for (auto &ch : s) if (ch != '*') { s1.push_back(ch); s1.push_back(ch); }
    s = s1;
    cout << s << endl;
    return 0;
}
