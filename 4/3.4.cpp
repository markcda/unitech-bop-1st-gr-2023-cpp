#include <iostream>
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

template<typename T> struct matrix {
  vector<vector<T>> m;
  bool valid = false;
};

template<typename T> matrix<T> read_matrix(int i, int j) {
  vector<vector<T>> m;
  for (int ii = 0; ii < i; ii++) {
    auto line = read_line<T>();
    if (line.size() != size_t(j)) {
      cout << "Ошибка!" << endl;
      return matrix<T> {{}, false};
    }
    m.push_back(line);
  }
  return matrix<T> {m, true};
}

enum Direction { Left, Down, Right };

int main() {
  auto a = read_line<float>();
  if (a.size() != 64) return 1;
  vector<vector<float>> B;
  for (int i = 0; i < 8; i++) {
    vector<float> line;
    for (int j = 0; j < 8; j++) line.push_back(0);
    B.push_back(line);
  }
  int xpos = 0, ypos = 7; Direction d = Left;
  for (int i = 0; i < 64; i++) {
    B[xpos][ypos] = a[i];
    if (d == Left and ypos != 0) ypos--;
    else if (d == Left and ypos == 0) {
      d = Down;
      xpos++;
    } else if (d == Down and ypos == 0) {
      d = Right;
      ypos++;
    } else if (d == Right and ypos != 7) ypos++;
    else if (d == Right and ypos == 7) {
      d = Down;
      xpos++;
    } else if (d == Down and ypos == 7) {
      d = Left;
      ypos--;
    }
  }
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++)
      cout << "\t" << B[i][j];
    cout << endl;
  }
  return 0;
}
