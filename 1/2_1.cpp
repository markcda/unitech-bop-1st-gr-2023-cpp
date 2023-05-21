#include <iostream>
#include <vector>
#include <numeric>

#include "line.hpp"

using namespace std;

int main() {
    cout << "Vvedite chisla:" << endl;
    auto v = read_line<float>();
    cout << accumulate(v.begin(), v.end(), 0) /* сумма элементов вектора */ << endl;
    return 0;
}
