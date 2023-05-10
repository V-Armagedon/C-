#include <iostream>
#include<stdio.h>
using namespace std;

class FlightBooking {
  public:
    FlightBooking(int id, int capacity, int reserved);
   void printStatus();
  private:
    int id;
    int capacity;
    int reserved;
    void set(int id, int capacity, int reserved);
    void get();
    int prectangle(int capacity, int reserved);
};
  FlightBooking::FlightBooking(int id, int capacity, int reserved){
  set(id, capacity, reserved);
}
  void FlightBooking::set(int id, int capacity, int reserved){
    this -> id = id;
    this -> capacity = capacity;
    this -> reserved = reserved;
  }
  int FlightBooking::prectangle(int capacity, int reserved){
    return (this -> reserved*100)/this -> capacity;
  }
  void FlightBooking::printStatus(){
 cout << "Flight" << this -> id << ":" << this ->reserved << "/" << this ->capacity << " " << "(" << prectangle(capacity, reserved) << "%) seats reserved";
}

int main() {
  int reserved = 0;
  int capacity = 0;
  cout << "Provide flight capacity: ";
  cin >> capacity;
  cout << "Provide number of reserved seats: ";
  cin >> reserved;
  FlightBooking booking(1, capacity, reserved);
  booking.printStatus();
  return 0;
}