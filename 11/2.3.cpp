#include <iostream>
#include "nstd_read.hpp"

using namespace std;

int main()
{
    int k, n;
    cout << "k, n:" << endl;
    cin >> k >> n;
    string tmp; getline(cin, tmp);
    auto a = read_line<float>();
    if (a.size() != k*n) return 1;
    vector<float> mins;
    for (int i = 0; i < n; i++) {
        float min = a[i*k];
        for (int j = 0; j < k; j++) {
            if (min > a[i*k + j]) min =  a[i*k + j];
        }
        mins.push_back(min);
    }
    for (auto &min : mins) cout << min << endl;
    return 0;
}
