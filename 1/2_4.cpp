#include <iostream>

#include "line.hpp"

using namespace std;

int main() {
    cout << "Vvedite chisla:" << endl;
    auto numbers = read_line<int>();
    int sum = 0;
    for (auto &el : numbers) if (el % 5 == 0) sum += el;
    cout << sum << endl;
    return 0;
}
