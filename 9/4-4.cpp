#include <iostream>
#include <vector>

struct clss {
  int year;
  char letter;
};

struct student {
  std::string fn;
  std::string ln;
  clss cl;
};


int main() {
  std::vector<student> students = {
    {"Надежда", "Корнеева", {2015, 'b'}},
    {"Надежда", "Корнилова", {2015, 'b'}},
    {"Елена", "Абхазева", {2015, 'b'}},
    {"Константин", "Поль", {2016, 'a'}}
  };
  std::vector<clss> classes;
  for (int i = 0; i < students.size(); i++) {
    bool nf = true;
    for (int j = 0; j < classes.size(); j++)
      if (students[i].cl.year == classes[j].year and students[i].cl.letter == classes[j].letter) {
        nf = false; break;
      }
    if (nf) {
      classes.push_back(students[i].cl);
      std::cout << "Класс " << students[i].cl.year << students[i].cl.letter << ":" << std::endl;
      for (int k = i; k < students.size(); k++)
        if (students[k].cl.year == students[i].cl.year and students[k].cl.letter == students[i].cl.letter)
          std::cout << "\t" << students[k].fn << " " << students[k].ln << std::endl;
    }
  }
  return 0;
}
