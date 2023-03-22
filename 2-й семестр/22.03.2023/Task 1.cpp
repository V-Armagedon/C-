#include <iostream>
using namespace std;

bool isPrime (int);

int main() {
  // int number;
  // Again:
  // cout << "Enter some number: ";
  // cin >> number;
  // if(isPrime(number)){
  //   cout << "Number " << number << " is Prime" << endl;
  // }else{
  //   cout << "Number " << number << " isn`t Prime" << endl;
  // }

  for(int i = 2; i<=21; i++){
    if(isPrime(i)){
      cout << i << " ";
      cout << endl;
    }
  }

  // goto Again;
}

bool isPrime(int n){
  for(int i = 2; i<10; i++){
    if(n%i==0){
      return false;
    }else{
      return true;
    }
  }
}