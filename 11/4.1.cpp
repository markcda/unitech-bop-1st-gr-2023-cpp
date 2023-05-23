#include <iostream>
#include "nstd_read.hpp"

using namespace std;

int main()
{
    wstring s;
    getline(wcin, s);
    bool ch1 = false, ch2 = false, ch3 = false, ch4 = false;
    for (auto &ch : s)
    {
        if (ch == L'!') break;
        if (ch == L'ш') ch1 = true;
        else if (ch == L'и') ch2 = true;
        else if (ch == L'н') ch3 = true;
        else if (ch == L'а') ch4 = true;
    }
    if (ch1 && ch2 && ch3 && ch4) cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}
