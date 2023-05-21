#include <iostream>
#include <numeric>
#include <cstdint>

#include "line.hpp"

using namespace std;

int main() {
    cout << "Vvedite chisla:" << endl;
    auto ns = read_line<int_fast32_t>();
    int_fast32_t min = INT_FAST32_MAX, max = INT_FAST32_MIN;
    for (auto &el : ns) {
        if (el > max) max = el;
        if (el < min) min = el;
    }
    cout << "Min: " << min << endl << "Max: " << max << endl;
    return 0;
}
