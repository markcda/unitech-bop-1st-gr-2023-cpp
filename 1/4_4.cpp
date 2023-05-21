#include <iostream>
#include <limits>
#include <vector>

struct luggage {
  int num = 0;
  float weight = 0.;
};

using namespace std;

int main() {
    vector<luggage> ls;
    ls.push_back({7, 16.0});
    ls.push_back({14, 17.8});
    int max_num = numeric_limits<int>::min(); size_t i_num = -1;
    float max_weight = numeric_limits<float>::min(); size_t i_weight = -1;
    for (size_t i = 0; i < ls.size(); i++) {
        if (ls[i].num > max_num) {
            max_num = ls[i].num;
            i_num = i;
        }
        if (ls[i].weight > max_weight) {
            max_weight = ls[i].weight;
            i_weight = i;
        }
    }
    if (i_num == i_weight) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
