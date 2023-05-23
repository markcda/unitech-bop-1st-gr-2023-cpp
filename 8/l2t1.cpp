#include <iostream>
#include "nstd_read.hpp"
using namespace std;

int main() {
    auto v = read_line<float>();
    if (v.size() != 20) return 1;
    vector<float> v1;
    int i1 = 0, i2 = 1, j1 = 0, j2 = 10, if1 = 0, if2 = 0;
    for (int i = 0; i < 20; i++) {
        if (i == i1) {
            v1.push_back(v[j1]);
            if (i1 % 2 == if1) i1 += 3;
            else i1++;
            j1++;
        } else if (i == i2) {
            v1.push_back(v[j2]);
            if (i2 % 2 == if2) i2 += 3;
            else i2++;
            j2++;
        }
    }
    for (int i = 0; i < 20; i++) cout << v1[i] << endl;
    return 0;
}
