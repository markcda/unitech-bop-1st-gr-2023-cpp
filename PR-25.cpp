/*! @brief TBD
 *  @details Создать абстрактный класс Товар с методами, позволяющим вывести на экран информацию о товаре, а также определить, соответствует ли она сроку годности на текущую дату.
 *  Создать производные классы: Продукт (название, цена, дата производства, срок годности), Партия (название, цена, количество шт, дата производства, срок годности), Комплект (названия, цена, перечень продуктов) со своими методами вывода информации на экран, и определения соответствия сроку годности.
 *  Создать базу (массив) из n товаров, вывести полную информацию из базы на экран, а также организовать поиск просроченного товара (на момент текущей даты).  */
#include <iostream>
#include <vector>

/*! @class Item
 *  @brief Абстрактный класс Товара.
 *  @details Включает в себя метод проверки истекания срока годности.  */
class Item {
public:
  std::string expiration_date;
  
  Item() {}
  Item(std::string _expiration_date) : expiration_date(_expiration_date) {}
  void print_info();
  bool expired(std::string curr_date) {
    if (curr_date >= expiration_date) return true;
    return false;
  }
};

/*! @class Product
 *  @brief Класс Продукта.  */
class Product : public Item {
public:
  std::string production_date;
  float weight;
  std::string model;
  float price;
  
  Product(
    std::string _model, std::string _production_date, std::string _expiration_date, float _weight, float _price
  ) : Item(_expiration_date),
      model(_model),
      production_date(_production_date),
      weight(_weight),
      price(_price) {}
  
  /*! @brief Выводит информацию о продукте. */
  void print_info() {
    std::cout
      << model << " (вес "
      << weight << " кг, цена "
      << price << " руб, срок производства "
      << production_date << ", срок годности "
      << expiration_date << ")." << std::endl;
  }
};

/*! @class Batch
 *  @brief Класс Партии продуктов.  */
class Batch : public Item {
public:
  std::string model;
  float price;
  int nums;
  std::string production_date;
  
  Batch(
    std::string _model, float _price, int _nums, std::string _production_date, std::string _expiration_date
  ) : Item(_expiration_date),
      model(_model),
      price(_price),
      nums(_nums),
      production_date(_production_date) {}
  
  /*! @brief Выводит информацию о продукте. */
  void print_info() {
    std::cout
      << model << " (количество "
      << nums << " шт, цена "
      << price << " руб, срок производства "
      << production_date << ", срок годности "
      << expiration_date << ")." << std::endl;
  }
};

/*! @class Complect
 *  @brief Класс Комплекта. */
class Complect : public Item {
public:
  std::string model;
  float price;
  std::vector<Product> products;
  
  Complect(std::string _model, float _price, std::vector<Product> _products)
    : Item(), model(_model), price(_price), products(_products) {}
  
  /*! @brief Выводит информацию о продукте. */
  void print_info() {
    std::cout
      << model << " (цена "
      << price << " руб)." << std::endl;
    for (auto &product : products) {
      std::cout << "\t";
      product.print_info();
    }
  }
  
  /*! @brief Проверяет продукты на срок годности. */
  bool expired(std::string curr_date) {
    bool expired = false;
    for (auto &product : products) {
      if (product.expired(curr_date)) {
        expired = true;
        std::cout << "Просрочен: ";
        product.print_info();
      }
    }
    return expired;
  }
};

int main() {
  Product milk("Домик в деревне: Молоко 2,5%", "2023.06.22", "2023.06.24", 1.05, 95.99);
  milk.print_info();
  std::cout << milk.expired("2023.05.25") << std::endl;
  Batch computers("Acer Aspire ES1-131", 350000, 17, "2023.01.06", "2060.09.06");
  computers.print_info();
  Complect sweets("Milka", 1000000, {
    Product("R1", "2023.05.12", "2023.05.20", 0.173, 96),
    Product("R2", "2023.05.12", "2023.05.29", 0.173, 98)
  });
  sweets.print_info();
  std::cout << sweets.expired("2023.05.25") << std::endl;
  return 0;
}

