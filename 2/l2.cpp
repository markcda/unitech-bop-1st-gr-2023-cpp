#include <iostream>
#include <cmath>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
  // Задача 1.
  cout << "Task 1." << endl;
  {
    cout << "\tEnter the number of numbers `n`: ";
    int n = 0;
    cin >> n;
    float sum = 0.;
    float a = 0.;
    for (int i = 0; i < n; i++) {
      cout << "\tEnter the " << (i + 1) << "-st(nd/rd/th) number: ";
      cin >> a;
      sum += abs(a);
    }
    cout << "\tThe result is " << sum << "." << endl;
  }
  // Задача 2.
  cout << "Task 2." << endl;
  {
    cout << "\tEnter the number of numbers `n`: ";
    int n = 0;
    cin >> n;
    float sum = 0.;
    float a = 0.;
    vector<float> vec_a;
    for (int i = 0; i < n; i++) {
      cout << "\tEnter the " << (i + 1) << "-st(nd/rd/th) number: ";
      cin >> a;
      vec_a.push_back(a);
      sum += abs(a);
    }
    float b = 0.;
    for (int i = 0; i < n; i++) {
      b = vec_a[i] / (1 + sum * sum);
      cout << "\t`b_" << i << "` = " << b << "." << endl;
    }
  }
  // Задача 3.
  cout << "Task 3." << endl;
  {
    cout << "\tEnter the number of numbers `n`: ";
    int n = 0;
    cin >> n;
    int b = 0.;
    vector<int> vec_b;
    for (int i = 0; i < n; i++) {
      cout << "\tEnter the " << (i + 1) << "-st(nd/rd/th) number: ";
      cin >> b;
      vec_b.push_back(b);
    }
    vector<float> vec_f_b;
    for (int i = 0; i < n; i++) {
      if (vec_b[i] % 3 == 0) vec_f_b.push_back(powf(float(vec_b[i]), 2.));
      else if (vec_b[i] % 3 == 1) vec_f_b.push_back(float(vec_b[i]));
      else vec_f_b.push_back(float(vec_b[i]) / 3);
    }
    for (int i = 0; i < n; i++) cout << "\t`f(b_" << i << ")` = " << vec_f_b[i] << "." << endl;
  }
  // Задача 4.
  cout << "Task 4." << endl;
  {
    cout << "\tEnter the number of numbers `n`: ";
    int n = 0;
    cin >> n;
    float a = 0.;
    vector<float> vec_a;
    for (int i = 0; i < n; i++) {
      cout << "\tEnter the " << (i + 1) << "-st(nd/rd/th) number: ";
      cin >> a;
      vec_a.push_back(a);
    }
    bool raising = true;
    for (int i = 1; i < n; i++) {
      if (vec_a[i] <= vec_a[i - 1]) {
        raising = false;
        break;
      }
    }
    if (raising) cout << "\tTrue." << endl;
    else cout << "\tFalse." << endl;
  }
  // Задача 5.
  cout << "Task 5." << endl;
  {
    cout << "\tEnter the number of numbers `n`: ";
    int n = 0;
    cin >> n;
    float a = 0.;
    unordered_map<float, bool> unord_map;
    for (int i = 0; i < n; i++) {
      cout << "\tEnter the " << (i + 1) << "-st(nd/rd/th) number: ";
      cin >> a;
      unord_map.insert_or_assign(a, true);
    }
    cout << "\tThere are " << unord_map.size() << " elements in the unordered map." << endl;
  }
  // Задача 6.
  cout << "Task 6." << endl;
  {
    float sum = 0.;
    int n = 0;
    float curr = 0.;
    while (true) {
      cout << "\tEnter a number: ";
      cin >> curr;
      if (curr < 0) break;
      sum += curr;
      n++;
    }
    if (n != 0) {
      cout << "\tAverage = " << sum / n << "." << endl;
    }
  }
  return 0;
}
