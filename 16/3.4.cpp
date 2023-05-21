#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    cout << "Vvedite x:" << endl;
    float x;
    cin >> x;
    vector<vector<float>> A;
    for (int i = 0; i < 10; i++) {
        vector<float> l;
        for (int j = 0; j < 10; j++) l.push_back(0);
        A.push_back(l);
    }
    float c;
    for (int i = 0; i < 10; i++) {
        c = powf(x, i);
        A[i][0] = c;
        A[0][i] = c;
        A[9][9-i] = c;
        A[9-i][9] = c;
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << "\t" << A[i][j];
        }
        cout << endl;
    }
    return 0;
}
