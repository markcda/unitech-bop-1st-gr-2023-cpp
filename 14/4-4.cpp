#include <iostream>
#include <vector>

using namespace std;

struct date {
  int day;
  string month; // "mar", "apr", "may", etc.
  int year;
};

int main() {
  vector<date> dates = {
    {27, "apr", 1993},
    {26, "apr", 1986},
    {25, "jan", 2005}
  };
  for (auto &d : dates) {
    if (d.month == "mar" or d.month == "apr" or d.month == "may") cout << d.day << "." << d.month << "::" << d.year << endl;
  }
  return 0;
}
