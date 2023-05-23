#include <iostream>
#include <vector>
#include "nstd_read.hpp"

using namespace std;

struct student {
    int year;
    char letter;
    string discipline;
    int a_gr;
    int b_gr;
    int c_gr;
    int d_gr;
    int avoided_l;
    int avoided_p;
};

int main()
{
    vector<student> sts = {
        {7, 'A', "Математика", 4, 5, 3, 0, 2, 0},
        {7, 'B', "Английский язык", 4, 1, 3, 0, 4, 0},
        {7, 'A', "Математика", 4, 5, 3, 0, 2, 1},
        {7, 'B', "Математика", 4, 5, 3, 0, 6, 5}
    };
    vector<string> discs;
    for (auto &student : sts)
    {
        bool n = true;
        for (auto &cd : discs) if (cd == student.discipline) { n = false; break; }
        if (n) discs.push_back(student.discipline);
    }
    for (auto &cd : discs)
    {
        float mid = 0;
        int total = 0;
        int al = 0, pl = 0;
        for (auto &student : sts)
        {
            if (student.discipline != cd) continue;
            mid += student.a_gr * 5 + student.b_gr * 4 + student.c_gr * 3 + student.d_gr * 2;
            total += student.a_gr + student.b_gr + student.c_gr + student.d_gr;
            al += student.avoided_l;
            pl += student.avoided_p;
        }
        cout << cd << "\t" << mid/total << "\t" << al+pl << "\t" << al << "\t" << pl << endl;
    }
    return 0;
}
