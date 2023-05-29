#include <iostream>
#include <cmath>
#include <vector>
#include <sstream>
using namespace std;

template<typename T> vector<T> read_line() {
    vector<T> v;
    string s;
    getline(cin, s);
    stringstream ss;
    ss << s;
    T found;
    string temp;
    while (not ss.eof()) {
        ss >> temp;
        if (stringstream(temp) >> found) {
            v.push_back(found);
        }
        temp = "";
    }
    return v;
}

int main() {
    int opt;
    while (true) {
        cout << "Выберите задание (1-6): ";
        cin >> opt;
        if (opt < 1 or opt > 6) return 0;
        switch (opt) {
            case 1: {
                int n;
                cin >> n;
                vector<int> b;
                for (int i = 1; i <= n; i++) b.push_back(pow(2, i) * pow(3, i+1));
                for (const auto &el : b) cout << el << endl;
            } break;
            case 2: {
                auto a = read_line<float>();
                float sum = 0;
                for (int i = 0; i < a.size(); i++) {
                    int fct = 1; for (int j = 2; j <= i + 1; j++) fct *= j;
                    sum += powf(-1.0, i+1) * a[i] / fct;
                }
                cout << sum << endl;
            } break;
            case 3: {
                float sum = 0;
                int ai, bi;
                for (int i = 1; i <= 30; i++) {
                    if (i % 2 == 0) { ai = i/2; bi = i*i*i; } else { ai = i; bi = i*i; }
                    sum += pow(ai - bi, 2);
                }
                cout << sum << endl;
            } break;
            case 4: {
                auto a = read_line<float>();
                float sum = 0;
                for (const auto &el : a) if (el > 0) sum += el*2;
                cout << sum << endl;
            } break;
            case 5: {
                auto a = read_line<float>();
                float max = abs(a[0]);
                float root = 0;
                for (const auto &el : a) {
                    if (abs(el) > max) max = abs(el);
                    root += pow(el, 2);
                }
                root = sqrt(root);
                cout << max << "\t" << root << endl;
            } break;
            case 6: {
                auto a = read_line<int>();
                int cntr = 0;
                for (const auto &el : a) {
                    if (el < 0) break;
                    if (el % 2 == 0) cntr++;
                }
                cout << cntr << endl;
            } break;
        }
    }
    return 0;
}
