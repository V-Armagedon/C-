#include <iostream>
#include <string>
using namespace std;

class LazySquare {
public:
  void set_side(double side) {
    if(this -> side != side){
      this -> side_changed = true;
      this -> side = side;
    }else{
      side_changed = false;
    }
    
  }
  double get_area() {
    if (side_changed) {
      area = side * side;
    }
    return area;
  }

private:
  double side;
  double area;
  bool side_changed;
};

class AdHocSquare : public LazySquare{
public:
  void set_side(double side) {
    if (side < 0) {
      LazySquare::set_side(0);
      this -> side = 0;
    }else{
      LazySquare::set_side(side);
      this -> side = side;
    }
  }
  double get_area() {
    return LazySquare::get_area();
  }
  void print(double side) {
    set_side(side);
     cout << "Square: side=" << this -> side << " area=" << get_area() <<  endl;
   }

private:
  double side;
};

int main() {
  AdHocSquare s;
  s.print(2.0);
  s.print(-33.0);
  s.print(0);
  s.print(5000);
  return 0;
}