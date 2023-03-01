#include <iostream>

struct Date{
  int hours;
  int minutes;
};

using namespace std;
int main(){
  Date date;
  int AddMinutes;

  Again:
  cout << "Введіть години: ";
  cin >> date.hours;
  cout << "Введіть хвилини: ";
  cin >> date.minutes;
  cout << "Введіть час у хвилинах який потрібно додати: ";
  cin >> AddMinutes;

  if(date.hours>=24 || date.minutes>60){
    cout << "-----------------------------------------------\n";
    cout << "Введіть коректну дату\n";
    goto Again;
  }
  
    date.minutes += date.hours*60+AddMinutes;
    date.hours = date.minutes/60;
    date.minutes -= date.hours*60;

  while(date.hours>=24){
    date.hours-=24;
  }
  

  if(date.hours<10 && date.minutes>10){
    cout << "0" << date.hours << ":" << date.minutes;
  }else if(date.hours>10 && date.minutes<10){
    cout << date.hours << ":" << "0" << date.minutes;
  }else if(date.hours<10 && date.minutes<10){
  cout << "0" << date.hours << ":" << "0" << date.minutes;
  }else{
    cout << date.hours << ":" << date.minutes;
  }
  cout << endl;
  goto Again;
}