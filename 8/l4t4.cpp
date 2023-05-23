#include <iostream>
#include <vector>
using namespace std;

struct student {
    string fn;
    string ln;
    int year;
    char letter;
};

int main() {
    vector<student> students = {
        {"J", "F", 2003, 'A'},
        {"J", "F", 2006, 'B'},
        {"J", "C", 2004, 'C'}
    };
    for (int i = 0; i < students.size(); i++) for (int j = i+1; j < students.size(); j++) {
        if (students[i].fn == students[j].fn and students[i].ln == students[j].ln) {
            cout << "yes" << endl;
            return 0;
        }
    }
    cout << "no" << endl;
    return 0;
}
