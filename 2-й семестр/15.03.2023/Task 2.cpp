#include <iostream>
#include <ctime>

using namespace std;

struct Date {
int year;
int month;
int day;
};

Date today(void);
bool isLeap(int year);
int monthLenght(int year, int month);
int convertToDay(Date);



int main() {
  Date t = today();
  cout << "Curent date: " << t.year << "-" << t.month << "-" << t.day << endl;
  Date bd;
  cout << "Enter year: ";
  cin >> bd.year;
  cout << "Enter month: ";
  cin >> bd.month;
  cout << "Enter day: ";
  cin >> bd.day;
  cout << bd.year << "-" << bd.month << "-" << bd.day <<endl;
  cout << "Days between " << t.year << "-" << t.month << "-" << t.day << " and " << bd.year << "-" << bd.month << "-" << bd.day << " equals " << convertToDay(t) - convertToDay(bd) << " days";
}


Date today(void){
  Date date;
  time_t t = time(NULL);
  tm tl = *localtime(&t);
  date.year = tl.tm_year+1900;
  date.month = tl.tm_mon+1;
  date.day = tl.tm_mday;
  return date;
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

int convertToDay(Date date){
  int day=0;
  for(int year = 1; year <date.year; year++){
    if(isLeap(year)){
      day += 366;
    }else{
      day +=365;
    }
  }
  for(int month = 1; month < date.month; month++){
    day += monthLenght(date.year, month);
  }
  day += date.day;
  return day;
}