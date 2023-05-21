#include <iostream>

#include "line.hpp"

using namespace std;

int main() {
    cout << "Vvedite chisla:" << endl;
    auto numbers = read_line<int>();
    int cntr = 0;
    for (auto &el : numbers) {
        if (el == 0) cntr++;
        else cntr = 0;
        if (cntr == 3) break;
    }
    if (cntr == 3) cout << "Da" << endl;
    else cout << "Net" << endl;
    return 0;
}
