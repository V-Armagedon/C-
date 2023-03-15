#include <iostream>

using namespace std;

bool isLeap(int year);
int monthLenght(int year, int month);

int main() {
  for(int yr = 2000; yr < 2002; yr++){
    for(int mo = 0; mo < 12; mo++)
    cout << monthLenght(yr, mo) << " ";
    cout << endl;
  }
}

bool isLeap(int year){
  if(year%4==0){
    return true;
  }else{
    return false;
  }
}

int monthLenght(int year, int month){
  int curentMonth;
  static int arrMonthOfLeapYear[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  static int arrMonthOfNoLeapYear[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  
  if(isLeap(year)){
    curentMonth = arrMonthOfLeapYear[month];
    return curentMonth;
  }else{
    curentMonth = arrMonthOfNoLeapYear[month];
    return curentMonth;
  }
}