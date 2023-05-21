#include <iostream>

#include "line.hpp"

using namespace std;

int main() {
    cout << "Vvedite 20 chisel:" << endl;
    auto nums = read_line<float>();
    if (nums.size() != 20) return 1;
    float tmp = 0.;
    for (int i = 0; i < 10; i++) {
        if (nums[i] < nums[10 + i]) {
            tmp = nums[i];
            nums[i] = nums[10 + i];
            nums[10 + i] = tmp;
        }
    }
    for (auto &el : nums) cout << el << endl;
    return 0;
}
