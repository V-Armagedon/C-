#include <iostream>

using namespace std;
int main() {
  int N, mul, a1, a2, a3;
  cout << "Введіть число від 100 до 999: ";
  Again:
  cin >> N;
  if (N<100 || N>999){
    cout << "Введіть корректне число: ";
    goto Again;
  }
  a1=N%10;
  if(a1%2==1){
    a1=1;
  }
  a2=N/10;
  a3=a2/10;
  if(a3%2==1){
    a3=1;
  }
  a2%=10;
  if(a2%2==1){
    a2=1;
  }
  mul=a1*a2*a3;
  if(mul==1){
    mul--;
  }
  cout << "Добуток парних чисел = " << mul;
}