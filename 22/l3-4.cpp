#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "Vvedite n:" << endl;
    int n;
    cin >> n;
    vector<vector<int>> D;
    for (int i = 0; i < n; i++) {
        vector<int> l;
        for (int j = 0; j < n; j++) l.push_back(0);
        D.push_back(l);
    }
    for (int i = 0; i < n; i++) {
        D[i][i] = (i+1)*(i+2);
    }
    return 0;
}
