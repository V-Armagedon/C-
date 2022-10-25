#include <iostream>

using namespace std;
int main() {
  long c0;
  int counter;
  while (true){
    cin >> c0;
    while (c0!=1){
      if (c0%2==0){
        c0=c0/2;
      }else if (c0%2!=0){
        c0=3*c0+1;
      }
      cout << c0 << endl;
      counter++;
    }
    cout << "Steps = ";
    cout << counter << endl;
    counter = 0;
  }
}