#include <iostream>

struct Date{
  int hours;
  int minutes;
};

using namespace std;
int main() {
  Date date1;
  Date date2;
  Date SubDate;

  Again:
  cout << "Введіть початкові години: ";
  cin >> date1.hours;
  cout << "Введіть початкові хвилини: ";
  cin >> date1.minutes;
  cout << "Введіть кінцеві години: ";
  cin >> date2.hours;
  cout << "Введіть кінцеві хвилини: ";
  cin >> date2.minutes;
  

  if(date1.hours>=24 || date1.minutes>60 || date2.hours>=24 || date2.minutes>60){
    cout << "-----------------------------------------------\n";
    cout << "Введіть коректну дату\n";
    goto Again;
  }
  
  SubDate.hours = date2.hours-date1.hours;
  SubDate.minutes = date2.minutes-date1.minutes;
  
  if(SubDate.hours<0){
    SubDate.hours=24+SubDate.hours;
  }
  if(SubDate.minutes<0){
    SubDate.minutes=60+SubDate.minutes;
    SubDate.hours--;
  }

  if(SubDate.hours<10 && SubDate.minutes>10){
    cout << "0" << SubDate.hours << ":" << SubDate.minutes;
  }else if(SubDate.hours>10 && SubDate.minutes<10){
    cout << SubDate.hours << ":" << "0" << SubDate.minutes;
  }else if(SubDate.hours<10 && SubDate.minutes<10){
  cout << "0" << SubDate.hours << ":" << "0" << SubDate.minutes;
  }else{
    cout << SubDate.hours << ":" << SubDate.minutes;
  }
  cout << endl;
  goto Again;
}