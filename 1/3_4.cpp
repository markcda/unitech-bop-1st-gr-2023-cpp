#include <iostream>

#include "matrix.hpp"

using namespace std;

enum Direction { Right, Down, Left, Up };

int main() {
    const int n = 7;
    vector<int> v;
    for (int i = 1; i <= n * n; i++) v.push_back(i); 
    vector<vector<int>> M;
    for (int i = 0; i < n; i++) {
        vector<int> line;
        for (int j = 0; j < n; j++) line.push_back(0);
        M.push_back(line);
    }
    Direction direction = Right;
    int xpos = 0, ypos = 0;
    for (int i = 0; i < n * n; i++) {
        M[ypos][xpos] = v[i];
        if (direction == Right) {
            if (xpos + 1 < n) {
                if (M[ypos][xpos + 1] == 0) {
                    xpos++;
                } else {
                    direction = Down;
                    ypos++;
                }
            } else {
                direction = Down;
                ypos++;
            }
        } else if (direction == Down) {
            if (ypos + 1 < n) {
                if (M[ypos + 1][xpos] == 0) {
                    ypos++;
                } else {
                    direction = Left;
                    xpos--;
                }
            } else {
                direction = Left;
                xpos--;
            }
        } else if (direction == Left) {
            if (xpos - 1 >= 0) {
                if (M[ypos][xpos - 1] == 0) {
                    xpos--;
                } else {
                    direction = Up;
                    ypos--;
                }
            } else {
                direction = Up;
                ypos--;
            }
        } else if (direction == Up) {
            if (ypos - 1 >= 0) {
                if (M[ypos - 1][xpos] == 0) {
                    ypos--;
                } else {
                    direction = Right;
                    xpos++;
                }
            } else {
                direction = Right;
                xpos++;
            }
        }
    }
    cout << "Matrica:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "\t" << M[i][j];
        }
    cout << endl;
    }
    return 0;
}
