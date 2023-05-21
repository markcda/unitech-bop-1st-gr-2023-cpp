#include <iostream>
#include <cmath>
#include <limits>
#include <vector>
#include "matrix.hpp"
using namespace std;

int max(vector<int> vec) {
    int max = numeric_limits<int>::min();
    for (auto el : vec) if (el > max) max = el;
    return max;
}

vector<int> generate(vector<int> vec, int ignore) {
    vector<int> new_vec;
    for (auto el : vec) if (el != ignore) new_vec.push_back(el);
    return new_vec;
}

int main() {
    cout << "input n:" << endl;
    int n;
    cin >> n;
    cout << "input a nums:" << endl;
    string tmp; getline(cin, tmp);
    auto a = read_line<int>();
    if (a.size() != n) return 1;
    auto a1 = generate(a, max(a));
    for (auto el : a1) cout << el << endl;
    return 0;
}
