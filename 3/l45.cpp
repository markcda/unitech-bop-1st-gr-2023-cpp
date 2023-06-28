#include <iostream>
#include <vector>

using namespace std;

struct student {
  string class_cipher;
  string discipline_cipher;
  int best_scores;
  int good_scores;
  int neutral_scores;
  int bad_scores;
  int lectures_gone;
  int practices_gone;
};

int main() {
  vector<student> students {
    {
      "10E",
      "math",
      3, 5, 2, 0,
      3, 1
    },
    {
      "10F",
      "math",
      5, 2, 0, 1,
      7, 10
    },
    {
      "10F",
      "math",
      1, 4, 0, 1,
      7, 13
    },
    // etc.
  };
  vector<string> unique_classes;
  for (const auto &student : students) {
    bool found = false;
    for (const auto &cl_ciph : unique_classes) if (student.class_cipher == cl_ciph) { found = true; break; }
    if (not found) unique_classes.push_back(student.class_cipher);
  }
  for (const auto &cl_ciph : unique_classes) {
    int scores = 0, cntr = 0;
    int total_lectures_gone = 0, total_practices_gone = 0;
    for (const auto &student : students) if (student.class_cipher == cl_ciph) {
      scores += 5 * student.best_scores + 4 * student.good_scores + 3 * student.neutral_scores + 2 * student.bad_scores;
      cntr += student.best_scores + student.good_scores + student.neutral_scores + student.bad_scores;
      total_lectures_gone += student.lectures_gone;
      total_practices_gone += student.practices_gone;
    }
    if (cntr == 0) continue;
    cout << 
      cl_ciph << "\t"
      << float(scores) / cntr << "\t"
      << total_lectures_gone + total_practices_gone << "\t"
      << total_lectures_gone << "\t"
      << total_practices_gone << endl;
  }
  return 0;
}
