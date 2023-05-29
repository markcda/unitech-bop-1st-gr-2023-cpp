#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

int main() {
    int opt;
    while (true) {
        cout << "Выберите задание (1-8): ";
        cin >> opt;
        if (opt < 1 or opt > 8) return 0;
        switch (opt) {
            case 1: {
                float x, y;
                cin >> x >> y;
                if (x >= -1 and x <= 0 and y >= 0 and y <= x) cout << "yes" << endl;
                else if (x >= 0 and x <= 1 and y >= 0 and y <= 1 - x) cout << "yes" << endl;
                else if (x >= -1 and x <= 1 and y >= -sqrt(1-x*x)) cout << "yes" << endl;
                else cout << "no" << endl;
            } break;
            case 2: {
                float y;
                cin >> y;
                for (float x = -2.5; x <= 2.501; x += 0.2) {
                    cout << (1 + x*x/2 + y*y/4) / (sqrt(abs(x-1))) << endl;
                }
            } break;
            case 3: {
                float a;
                cin >> a;
                if (a <= 0) cout << 0 << endl;
                else if (a > 0 and a <= 1) cout << a*a - a << endl;
                else cout << a*a - sin(a*a) << endl;
            } break;
            case 4: {
                float y;
                float miny = numeric_limits<float>::max();
                for (float x = -3.1; x <= 3.101; x += 0.2) {
                    y = sqrt((12.4*x + 0.6*exp(-x))/3);
                    cout << x << "\t" << y << endl;
                    if (miny > y) miny = y;
                }
                cout << "min: " << miny << endl;
            } break;
            case 5: {
                int n, k;
                cin >> n >> k;
                if (k > n) swap(k, n);
                float mul = 1; for (int i = 0; i < k; i++) mul *= n - i;
                int fact = 1; for (int i = 2; i <= k; i++) fact *= i;
                cout << mul / fact << endl;
            } break;
            case 6: {
                float sum = 0;
                int n;
                cin >> n;
                for (int k = 1; k <= n; k++) {
                    sum += powf(-1.0, k+1) * n / (k * (k+1));
                }
                cout << sum << endl;
            } break;
            case 7: {
                float a, b;
                cin >> a >> b;
                float y1;
                float y2 = a, y = b;
                float eps = 0.0001;
                do { y1 = y2; y2 = y; y = y2 - y1; } while (abs(y - y2) >= eps);
                cout << y << endl;
            } break;
            case 8: {
                float x, eps;
                cin >> x >> eps;
                float prev, sum = 0;
                int k = 0;
                do {
                    prev = sum;
                    int fct = 1; for (int i = 2; i <= 2*k; i++) fct *= i;
                    sum = powf(-1.0, k) * powf(x, 4*k) / (fct * (4*k + 1));
                } while (abs(sum - prev) >= eps);
                cout << sum << endl;
            } break;
        }
    }
    return 0;
}
