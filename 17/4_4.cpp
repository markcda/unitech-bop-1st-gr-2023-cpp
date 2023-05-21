#include <iostream>
#include <vector>

using namespace std;

struct Book {
  string surname;
  string title;
  int year;
};

int main() {
  vector<Book> books = {
    {"A1", "Информатика", 2007},
    {"A2", "Проблематика инфокоммуникационных систем", 1959},
    {"A1", "Информатика", 2008},
    {"A3", "Защита информации в КГБ СССР", 2014}
  };
  string target = "Информатика";
  bool found = false;
  for (auto &book : books) {
    if (book.title == target) {
      cout << book.surname << ", " << book.year << endl;
      found = true;
    }
  }
  if (!found) cout << "Книги не найдено." << endl;
  return 0;
}
