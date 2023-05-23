#include <iostream>
#include <vector>
using namespace std;

struct luggage {
    int num = 0;
    float weight = 0;
};

int main() {
    vector<luggage> ls = {{7, 16.0},{14, 17.8},{13, 15.1}};
    float mid = 0;
    int total = 0;
    for (auto &lug : ls) { mid += lug.weight; total += lug.num; }
    mid /= total;
    for (auto &lug : ls) {
        if (abs(lug.weight/lug.num - mid) <= 0.3) cout << lug.num << "\t" << lug.weight << endl;
    }
    return 0;
}
