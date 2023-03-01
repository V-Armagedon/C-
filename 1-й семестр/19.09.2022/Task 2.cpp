#include <iostream>
using namespace std;
int main() {
  int a=0;
  cycle:
  cout << "Введіть номер моделі: ";
  cin >> a;
  switch(a){
    case(1):
      cout << "Model: BMW X5\nPrice: 7.209.279,35 UAH\nRelease: 2022" << endl;
      break;
    case(2):
      cout << "Model: Mercedes-Benz E-Class\nPrice: 7.563.633,76 UAH\nRelease: 2022" << endl;
      break;
    case(3):
      cout << "Model: Tesla Model S\nPrice: 3.360.257,32 UAH\nRelease: 2018" << endl;
      break;
    case(4):
      cout << "(Model: Maserati MC20\nPrice: 9.653.102,86 UAH\nRelease: 2020" << endl;
      break;
    default:
      cout << "Enter correct model" << endl;
  }
  goto cycle;
    return 0;
}