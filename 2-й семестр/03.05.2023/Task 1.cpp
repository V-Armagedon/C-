#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

class GMMS{
public:
  GMMS();
  GMMS(int, string, int);
  void CreateMember(int);
  void deleteMember();
  void extendMembership(int);
  void cancelSubscription();
  int get_id();
  void print(int);
  string name;
  int NameLength;
private:
  int id;
  int subscription;
  void set(int, string, int);
  void get();
};
GMMS::GMMS(){
  this -> id = 0;
  this -> name = "";
  this -> subscription = 0;
}
GMMS::GMMS(int ID, string Name, int Month){
  set(ID, Name, Month);
}
void GMMS::CreateMember(int ID){
  this -> id = ID;
}
void GMMS::deleteMember(){
  this -> id = 0;
  this -> NameLength = 0;
}
void GMMS::extendMembership(int Month){
  this -> subscription += Month;
}
void GMMS::cancelSubscription(){
  this -> subscription = 0;
}
void GMMS::print(int nameLength) {
  cout << "Member " << this->id << ": ";
  for(int i = 0; i < nameLength; i++){
    cout << this->name[i];
  }
  cout << ", subscription valid for " << this-> subscription << " month" << endl;
}
void GMMS::set(int ID, string Name, int Month){
  this -> id = ID;
  this -> name = Name;
  this -> subscription = Month;
}
int GMMS::get_id(){
  return this -> id;
}
int main() {
  string command = "";
  int argument = 0;
  int IDargument = 0;
  string NameArgument = "";
  int j, i;
  int number;
  string Stemp;
  int Itemp;
  int Itemp2;
  
  GMMS subscribtion[4];
  subscribtion[0] = GMMS(1, "John Doe", 6);
  subscribtion[0].NameLength = 8;

  while(command != "quit"){
    i = 0;
    j = 0;
    argument = 0;
    IDargument = 0;
    NameArgument = "";

    cout << "What would you like to do?: ";
    getline(cin, command);
    
    if(command[0] == 'c' && command[1] == 'r'){
      for(i = command.length()-1; j<2; i--){
        if(command[i] == ' '){
          j++;
        }
      }
      Itemp = i--;
      for(i+=3, j=0; i < command.length(); i++, j++){
        NameArgument[j] = command[i];
      }
      Itemp2 = j;
      for(i = Itemp, j=0; command[i] != ' '; i--, j++){
        Stemp = command[i];
        number = stoi(Stemp);
        IDargument += number * pow(10, j);
      }
      for(i = 0; i<4; i++){
        if(subscribtion[i].get_id() == 0){
          if(IDargument >= 1){
            subscribtion[i].NameLength = Itemp2;
            for(j = 0; j<Itemp2; j++){
              subscribtion[i].name[j] = NameArgument[j];
            }
              subscribtion[i].CreateMember(IDargument);
              break;
          }else{
            cout << "-----------------------" << endl;
            cout << "--- Incorrect ID ---" << endl;
            cout << "-----------------------" << endl;
            break;
          }
        }
        if(i==3){
          cout << "-----------------------" << endl;
          cout << "--- Maximum member number ---" << endl;
          cout << "-----------------------" << endl;
        }
      }
      
    }else if (command[0] == 'l'){
      cout << "-----------------------" << endl << "List: " << endl << "-----------------------" << endl;
      for(i = 0; i<4; i++){
        Itemp2 = subscribtion[i].NameLength;
        if(subscribtion[i].get_id() != 0){
          subscribtion[i].print(Itemp2);
        }
      }
      cout << "-----------------------" << endl;
      
    } else if (command[0] == 'd') {
      for (i = command.length() - 1; command[i] != ' '; i--, j++) {
        Stemp = command[i];
        number = stoi(Stemp);
        IDargument += number * pow(10, j);
      }
      for (i = 0; i < 10; i++) {
        if (IDargument == subscribtion[i].get_id()) {
          subscribtion[i].deleteMember();
          break;
        }
        if (i == 9) {
          cout << "-----------------------" << endl;
          cout << "--- No member with ID " << IDargument << " ---" << endl;
          cout << "-----------------------" << endl;
        }
      }
    } else if (command[0] == 'e') {
      for (i = command.length() - 1; command[i] != ' '; i--, j++) {
        Stemp = command[i];
        number = stoi(Stemp);
        argument += number * pow(10, j);
      }
      for (i--, j = 0; command[i] != ' '; i--, j++) {
        Stemp = command[i];
        number = stoi(Stemp);
        IDargument += number * pow(10, j);
      }
      for (i = 0; i < 10; i++) {
        if (IDargument == subscribtion[i].get_id()) {
          subscribtion[i].extendMembership(argument);
          break;
        }
        if (i == 9) {
          cout << "-----------------------" << endl;
          cout << "--- No member with ID " << IDargument << " ---" << endl;
          cout << "-----------------------" << endl;
        }
      }
    } else if (command[0] == 'c' && command[1] == 'a') {
      for (i = command.length() - 1; command[i] != ' '; i--, j++) {
        Stemp = command[i];
        number = stoi(Stemp);
        IDargument += number * pow(10, j);
      }
      for (i = 0; i < 10; i++) {
        if (IDargument == subscribtion[i].get_id()) {
          subscribtion[i].cancelSubscription();
          break;
        }
        if (i == 9) {
          cout << "-----------------------" << endl;
          cout << "--- No member with ID " << IDargument << " ---" << endl;
          cout << "-----------------------" << endl;
        }
      }
    }
  }
  
}