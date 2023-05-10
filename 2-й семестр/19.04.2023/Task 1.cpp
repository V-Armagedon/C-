#include <iostream>
#include<string.h>
using namespace std;

class ShopItemOrder{
  private:
    string name;
    double price;
    int NumberOfItem;

  public:
    void get();
    void set(string name, double price, int NumberOfItem);
    double getTotalPrice(double price, int NumberOfItems);
    void print();
    ShopItemOrder(string name, double price, int NumberOfItem);
};

  ShopItemOrder::ShopItemOrder(string name, double price, int NumberOfItem){
    set(name, price, NumberOfItem);
  }

  void ShopItemOrder::set(string name, double price, int NumberOfItem){
    this -> name = name;
    this -> price = price;
    this -> NumberOfItem = NumberOfItem;
  }
  void ShopItemOrder::get(){
    cout << this -> name << "\n" << this -> price << "\n" << this -> NumberOfItem << "\n";
  }

  void ShopItemOrder::print(){
    cout << this -> name << "/" << this -> price << "/" << this -> NumberOfItem;
  }
  double ShopItemOrder::getTotalPrice(double price, int NumberOfItems){
    return price * NumberOfItems;
  }

int main() {
  ShopItemOrder Item1("computer", 10000, 2);
  Item1.print();
}