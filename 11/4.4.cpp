#include <iostream>
#include <vector>
#include "nstd_read.hpp"

using namespace std;

struct mark {
    string discipline;
    int lastmark;
};

struct student {
    string fn;
    string ln;
    int year;
    char letter;
    vector<mark> studies;
};

int main()
{
    vector<student> sts = {
        {"Азер", "Крид", 7, 'A', {
            {"Математика", 5},
            {"Английский язык", 4}
        }},
        {"Кирилл", "Крид", 7, 'B', {
            {"Математика", 5},
            {"Английский язык", 5}
        }},
        {"Бин", "Дин", 8, 'A', {
            {"Математика", 5},
            {"Английский язык", 4}
        }},
        {"Алин", "Джарин", 9, 'B', {
            {"Математика", 3},
            {"Английский язык", 4}
        }}
    };
    for (int i = 0; i < sts.size(); i++) {
        bool goodmarks = true;
        for (auto &study : sts[i].studies) if (study.lastmark < 4) { goodmarks = false; break; }
        if (not goodmarks) continue;
        int sm = 0;
        for (auto &study : sts[i].studies) sm += study.lastmark;
        bool best = true;
        for (int j = 0; j < sts.size(); j++)
        {
            if (i == j) continue;
            if (sts[i].year != sts[j].year) continue;
            int sm2 = 0;
            for (auto &study : sts[j].studies) sm2 += study.lastmark;
            if (sm2 > sm) { best = false; break; }
        }
        if (not best) continue;
        cout << sts[i].fn << " " << sts[i].ln << endl;
    }
    return 0;
}
