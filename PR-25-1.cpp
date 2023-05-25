#include <iostream>
#include <vector>

using namespace std;

class Item {
public:
  string expiration_date;
  
  Item() {}
  Item(string _expiration_date) : expiration_date(_expiration_date) {}
  void print_info();
  bool expired(string curr_date) {
    if (curr_date >= expiration_date) return true;
    return false;
  }
};

class Product : public Item {
public:
  string production_date;
  float weight;
  string model;
  float price;
  
  Product(
    string _model, string _production_date, string _expiration_date, float _weight, float _price
  ) : Item(_expiration_date),
      model(_model),
      production_date(_production_date),
      weight(_weight),
      price(_price) {}

  void print_info() {
    cout
      << model << " (вес "
      << weight << " кг, цена "
      << price << " руб, срок производства "
      << production_date << ", срок годности "
      << expiration_date << ")." << endl;
  }
};

class Batch : public Item {
public:
  string model;
  float price;
  int nums;
  string production_date;
  
  Batch(
    string _model, float _price, int _nums, string _production_date, string _expiration_date
  ) : Item(_expiration_date),
      model(_model),
      price(_price),
      nums(_nums),
      production_date(_production_date) {}
  
  void print_info() {
    cout
      << model << " (количество "
      << nums << " шт, цена "
      << price << " руб, срок производства "
      << production_date << ", срок годности "
      << expiration_date << ")." << endl;
  }
};

class Complect : public Item {
public:
  string model;
  float price;
  vector<Product> products;
  
  Complect(string _model, float _price, vector<Product> _products)
    : Item(), model(_model), price(_price), products(_products) {}

  void print_info() {
    cout
      << model << " (цена "
      << price << " руб)." << endl;
    for (auto &product : products) {
      cout << "\t";
      product.print_info();
    }
  }

  bool expired(string curr_date) {
    bool expired = false;
    for (auto &product : products) {
      if (product.expired(curr_date)) {
        expired = true;
        cout << "Просрочен: ";
        product.print_info();
      }
    }
    return expired;
  }
};

int main() {
  Product milk("Домик в деревне: Молоко 2,5%", "2023.06.22", "2023.06.24", 1.05, 95.99);
  milk.print_info();
  cout << milk.expired("2023.05.25") << endl;
  Batch computers("Acer Aspire ES1-131", 350000, 17, "2023.01.06", "2060.09.06");
  computers.print_info();
  Complect sweets("Milka", 1000000, {
    Product("R1", "2023.05.12", "2023.05.20", 0.173, 96),
    Product("R2", "2023.05.12", "2023.05.29", 0.173, 98)
  });
  sweets.print_info();
  cout << sweets.expired("2023.05.25") << endl;
  return 0;
}

