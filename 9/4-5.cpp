#include <iostream>
#include <vector>

struct clss {
  int year;
  char letter;
};

struct student {
  clss cl;
  std::string discipline;
  int a_gr;
  int b_gr;
  int c_gr;
  int d_gr;
  int avoided_l;
  int avoided_p;
};

int main() {
  std::vector<student> students = {
    {{2015, 'b'}, "dds", 5, 6, 2, 0, 3, 0},
    {{2015, 'b'}, "dds", 2, 9, 1, 3, 6, 4},
    {{2015, 'b'}, "dds", 15, 7, 1, 1, 0, 0},
    {{2016, 'a'}, "dds", 9, 6, 2, 0, 3, 0}
  };
  std::vector<clss> classes;
  for (int i = 0; i < students.size(); i++) {
    bool nf = true;
    for (int j = 0; j < classes.size(); j++)
      if (students[i].cl.year == classes[j].year and students[i].cl.letter == classes[j].letter) { nf = false; break; }
    if (nf) classes.push_back(students[i].cl);
  }
  for (int i = 0; i < classes.size(); i++) {
    int prz = 0;
    int agr = 0, bgr = 0, cgr = 0, dgr = 0;
    for (int j = 0; j < students.size(); j++) {
      if (students[j].cl.year == classes[i].year and students[j].cl.letter == classes[i].letter) {
        prz += students[j].avoided_l + students[j].avoided_p;
        agr += students[j].a_gr;
        bgr += students[j].b_gr;
        cgr += students[j].c_gr;
        dgr += students[j].d_gr;
      }
    }
    std::cout << "Класс " << i+1 << ":\t" << prz << "\t" << agr << "\t" << bgr << "\t" << cgr << "\t" << dgr << std::endl;
  }
  return 0;
}
