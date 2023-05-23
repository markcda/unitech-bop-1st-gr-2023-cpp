#include <iostream>
#include "nstd_read.hpp"

using namespace std;

int main()
{
    string f;
    getline(cin, f);
    string g;
    getline(cin, g);
    string h;
    int minsize = f.size(); if (g.size() < minsize) minsize = g.size();
    for (int i = 0; i < minsize; i++) if (f[i] == g[i]) h.push_back(f[i]);
    cout << h << endl;
    return 0;
}
