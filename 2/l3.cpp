#include <numeric>
#include <iostream>
#include <sstream>
#include <cmath>
#include <vector>

using namespace std;

template<typename T> struct matrix {
  vector<vector<T>> m;
  bool valid = false;
};

// Считывает строку (элементы - через пробел с клавиатуры).
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

// Считывает матрицу построчно (элементы - через пробел) с клавиатуры.
template<typename T> matrix<T> read_matrix(int i, int j) {
  vector<vector<T>> m;
  for (int ii = 0; ii < i; ii++) {
    auto line = read_line<T>();
    if (line.size() != size_t(j)) {
      cout << "\tFailed!" << endl;
      return matrix<T> {{}, false};
    }
    m.push_back(line);
  }
  return matrix<T> {m, true};
}

int main() {
  // Задача 1.
  cout << "Task 1." << endl;
  {
    int n = 0;
    cout << "\tEnter `n`: ";
    cin >> n;
    {
      // Без этих двух строк не будет работать чтение строк из `cin`.
      string getline_init;
      getline(cin, getline_init);
    }
    cout << "\tInput matrix A." << endl;
    auto A = read_matrix<float>(n, n);
    cout << "\tInput matrix B." << endl;
    auto B = read_matrix<float>(n, n);
    if (A.valid and B.valid) {
      float sum = 0.;
      for (int i = 0; i < n; i++) sum += A.m[i][i] + B.m[i][i];
      cout << "\tThe sum = " << sum << "." << endl;
    }
  }
  // Задача 2.
  cout << "Task 2." << endl;
  {
    // Задаём один и тот же тип данных для задачи 2.
    typedef float task2_type;
    //      ^^^^^            
    cout << "\tInput `a`-numbers." << endl;
    auto a = read_line<task2_type>();
    cout << "\tInput `b`-numbers." << endl;
    auto b = read_line<task2_type>();
    auto find_max_index = []<typename T>(vector<T> v) {
      // Ищет индекс максимального числа.
      size_t m_i = 0; 
      for (size_t i = 1; i < v.size(); i++) {
        if (v[i] > v[m_i]) m_i = i;
      }
      return m_i;
    };
    auto a_mi = find_max_index(a);
    for (size_t i = a_mi + 1; i < a.size(); i++) if (a[i] < 0) a[i] = 0.5;
    auto b_mi = find_max_index(b);
    for (size_t i = b_mi + 1; i < b.size(); i++) if (b[i] < 0) b[i] = 0.5;
    string s_a = accumulate(++a.begin(), a.end(), to_string(a[0]), [](const string& a, task2_type b) {
      return a + " " + to_string(b);
    });
    cout << "\tLine a: " << s_a << endl;
    string s_b = accumulate(++b.begin(), b.end(), to_string(b[0]), [](const string& a, task2_type b) {
      return a + " " + to_string(b);
    });
    cout << "\tLine b: " << s_b << endl;
  }
  // Задача 3.
  cout << "Task 3." << endl;
  {
    int n = 0;
    cout << "\tEnter `n`: ";
    cin >> n;
    {
      // Без этих двух строк не будет работать чтение строк из `cin`.
      string getline_init;
      getline(cin, getline_init);
    }
    cout << "\tInput matrix." << endl;
    auto M = read_matrix<int>(n, n);
    if (M.valid) {
      for (int i = 0; i < n; i++) {
        bool even = true;
        for (int j = 0; j < n; j++) if (M.m[i][j] % 2 != 0) {
          even = false;
          break;
        }
        if (even) cout << "\tEven line: " << i + 1 << "." << endl;
      }
    }
  }
  // Задача 4.
  cout << "Task 4." << endl;
  {
    cout << "\tInput 64 elements." << endl;
    auto v = read_line<int>();
    if (v.size() == 64) {
      const int n = 8;
      vector<vector<int>> M;
      for (int i = 0; i < n; i++) {
        vector<int> l;
        for (int j = 0; j < n; j++) l.push_back(0);
        M.push_back(l);
      }
      int px = 0, py = n - 1;
      bool direction = true; // `false` is down-right, `true` is controversial, e.g. up-left
      bool one_step_done = false;
      // Let's set the first element.
      M[px][py] = v[0];
      for (int pos = 1; pos < n * n; pos++) {
        if (px == 0 and py != 0 and direction and not one_step_done) {
          direction = false;
          one_step_done = true;
          py--;
        } else if (px != 0 and px != (n - 1) and py == (n - 1) and not direction and not one_step_done) {
          direction = true;
          one_step_done = true;
          px++;
        } else if (py == 0 and direction and not one_step_done) {
          direction = false;
          one_step_done = true;
          px++;
        } else if (px == (n - 1) and not direction and not one_step_done) {
          direction = true;
          one_step_done = true;
          py--;
        } else {
          one_step_done = false;
          if (direction == false) {
            px++;
            py++;
          } else {
            px--;
            py--;
          }
        }
        // cout << "\tCurrent `(px, py)`: (" << px << ", " << py << "), the value is " << v[pos] << "." << endl;
        M[px][py] = v[pos];
      }
      cout << "\tThe matrix:" << endl;
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
          cout << "\t" << M[i][j];
        }
        cout << endl;
      }
    }
  }
  return 0;
}
