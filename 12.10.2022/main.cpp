#include <iostream>

using namespace std;
int main() {
  int N;
  int a, b;
  while(true){
  b=0;
  cout << "Enter a number: ";
  cin >> N;
  while (N>2){
    a=N%10;
    N=N/10;
    if(a>2 && a%2!=0){
      b +=a;
    }
  }
  cout << "Sum: ";
  cout << b << endl;
    }
    return 0;
}