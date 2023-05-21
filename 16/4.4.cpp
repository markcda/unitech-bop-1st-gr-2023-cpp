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
        {"Гринёв", "Философия Ветхого завета", 2007},
        {"Гринёв", "Философия Древней Греции", 1959},
        {"Остафьев", "АРМА", 2008},
        {"Костерыжкин", "Сын отца, да, сын отца", 2014}
    };
    string target = "Гринёв";
    for (auto &book : books) {
        if (book.surname == target) if (book.year >= 1960) cout << book.title << endl;
    }
    return 0;
}
