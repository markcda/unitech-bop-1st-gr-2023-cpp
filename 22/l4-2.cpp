#include <iostream>
#include <vector>

using namespace std;

vector<string> ungroup(string s) {
    vector<string> u;
    string tmp;
    for (auto &ch : s) {
        if (ch >= 'a' && ch <= 'z') tmp += ch;
        else if (tmp.size() != 0) { u.push_back(tmp); tmp = ""; }
    }
    if (tmp.size()) u.push_back(tmp);
    return u;
}

int main() {
    string s;
    getline(cin, s);
    auto u = ungroup(s);
    int cntr = 0;
    for (auto &g : u) if (g[0] == g[g.size() - 1]) cntr++;
    cout << cntr << endl;
    return 0;
}
