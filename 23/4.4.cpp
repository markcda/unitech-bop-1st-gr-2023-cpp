#include <iostream>
#include <vector>
using namespace std;

enum P { PFull, PSemi, PBlock };

struct item {
  string title;
  int weight;
  enum P p;
};

vector<item> selectnsort(vector<item> items, enum P condition) {
  vector<item> vec;
  for (auto &item : items) if (item.p == condition) vec.push_back(item);
  for (int i = 0; i < vec.size(); i++)
    for (int j = i; j < vec.size(); j++)
      if (vec[i].weight < vec[j].weight) swap(vec[i], vec[j]);
  return vec;
}

int main() {
  vector<item> items = {
    {"Si", 114, P::PSemi},
    {"Se", 182, P::PSemi}
  };
  auto vec = selectnsort(items, P::PSemi);
  for (auto &el : vec) cout << el.title << "\t" << el.weight << endl;
  return 0;
}
