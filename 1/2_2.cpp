#include <iostream>
#include <vector>

#include "line.hpp"

using namespace std;

int main() {
    cout << "Vvedite chisla:" << endl;
    auto a = read_line<float>();
    vector<float> b;
    b.push_back(a[0]);
    for (size_t i = 1; i < a.size() - 1; i++) b.push_back((a[i - 1] - a[i]) / 3);
    b.push_back(a[a.size() - 1]);
    for (auto &el : b) cout << el << endl;
    return 0;
}
