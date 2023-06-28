#include <iostream>
#include <vector>

using namespace std;

struct machine {
  string model;
  string num;
  string last_name;
};

int main() {
  vector<machine> machines {
    {
      "Audi",
      "I122EV",
      "Isaev"
    },
    {
      "Audi",
      "L123EK",
      "Orchebald"
    },
    {
      "Volvo",
      "O973VS",
      "Bach"
    }
    // etc.
  };
  string model;
  getline(cin, model);
  for (const auto &machine : machines) if (machine.model == model)
    cout << "Found: " << machine.last_name << "'s machine, number " << machine.num << endl;
  return 0;
}
