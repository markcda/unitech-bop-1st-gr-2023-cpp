#include <iostream>
#include <vector>

using namespace std;

enum P { PFull, PSemi, PBlock };

struct item {
    string title;
    int weight;
    enum P p;
};

int main() {
    vector<item> items = {
        {"Тринитротолуол", 166, P::PBlock},
        {"Кремний", 271, P::PSemi}
    };
    for (auto &it : items) cout << it.title << "\t" << it.weight << endl;
    return 0;
}
