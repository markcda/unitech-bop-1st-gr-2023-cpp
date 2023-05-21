#include <iostream>
#include <cmath>

using namespace std;

bool task1_decide(float x, float y) {
  if (x < -2) return false;
  if (x > 2) return false;
  if (y > x * x) return false;
  if (y < - (x * x)) return false;
  return true;
}

bool task3_decide(float a, float b, float c) {
  return (b * b - 4 * a * c) >= 0;
}

int main() {
  // Задача 1.
  cout << "Task 1." << endl;
  {
    float x = 0., y = 0.;
    cout << "\tEnter numbers `x` and `y`: ";
    cin >> x >> y;
    if (task1_decide(x, y)) cout << "\tThe point belongs to the graph." << endl;
    else cout << "\tFalse." << endl;
  }
  // Задача 2.
  cout << "Task 2." << endl;
  {
    for (float x = -2.1; x < 2.2; x += 0.1)
      cout << "\tWhile x = " << x << ", y = " << (1 - sqrt(1 + abs(sin(x)))) / 2 << "." << endl;
  }
  // Задача 3.
  cout << "Task 3." << endl;
  {
    cout << "\tEnter `h`: ";
    float h = 0.;
    cin >> h;
    float a = sqrt((abs(sin(18. * h)) + 17)/(powf(1. - sin(4. * h), 2.)));
    float b = 1 - sqrt(3 / (3 + abs(cos(a * h * h) - sin(a * h))));
    float c = a * h * h * sin(b * h) + b * h * h * h * cos(a * h);
    if (task3_decide(a, b, c)) {
      float r1 = (-b + sqrt(b * b - 4 * a * c))/(2 * a);
      float r2 = (-b - sqrt(b * b - 4 * a * c))/(2 * a);
      cout << "\tRoots are " << r1 << " and " << r2 << "." << endl;
    } else cout << "\tThere is no roots." << endl;
  }
  // Задача 4.
  cout << "Task 4." << endl;
  {
    float max_y = 0.;
    float y = 0.;
    cout << "\tx\ty" << endl;
    for (float x = -2.1; x < 2.2; x += 0.1) {
      y = 3 * abs(2 * sin(x) - 3 * cos(x));
      if (y > max_y) max_y = y;
      cout << "\t" << x << "\t" << y << endl;
    }
    cout << "\tMax `y` is " << max_y << endl;
  }
  // Задача 5.
  cout << "Task 5." << endl;
  {
    float a = 0.;
    int n = 0;
    cout << "\tEnter a real number `a` and a natural number `n`: ";
    cin >> a >> n;
    float product = 1.;
    for (int i = 0; i <= n; i++) product *= (a - i * n);
    cout << "\tThe result is " << product << "." << endl;
  }
  // Задача 6.
  cout << "Task 6." << endl;
  {
    float sum = 0.;
    cout << "\tEnter a natural number `n`: ";
    int n = 0;
    cin >> n;
    for (float i = 0.; i < n; i++) sum += (powf(4., i) / powf(5., i + 2.));
    cout << "\tThe result is " << sum << "." << endl;
  }
  // Задача 7.
  cout << "Task 7." << endl;
  {
    cout << "\tEnter some small number `epsilon`: ";
    float eps = 0.;
    cin >> eps;
    cout << "\tEnter a real number `x`: ";
    float x = 0.;
    cin >> x;
    int n = 1;
    float a_prev = 0., a_curr = x;
    do {
      a_prev = a_curr;
      a_curr = x / (1 + abs(a_prev)) + 2 * a_prev; 
    } while (abs(a_curr - a_prev) >= eps);
    cout << "\tFirst winner (`n` = " << n << ") is the " << a_curr << "." << endl;
  }
  // Задача 8.
  cout << "Task 8." << endl;
  {
    cout << "\tEnter some small number `epsilon` again: ";
    float eps = 0.;
    cin >> eps;
    cout << "\tAnd again, enter a real number `x`: ";
    float x = 0.;
    cin >> x;
    float k = 1.;
    float sum_prev = 0., sum_curr = 0.;
    do {
      sum_prev = sum_curr;
      sum_curr += (powf(-1., k + 1) * powf(x, 2 * k - 1) / powf(x + 1, 2 * k));
    } while (abs(sum_curr - sum_prev) >= eps);
    cout << "\tFirst winner is the " << sum_curr << "." << endl;
  }
  return 0;
}
