#include <iostream>
#include <string.h>
using namespace std;

class IPAddress{
  protected:
    string IPaddress;
  public:
    void print(){
      cout << IPaddress << endl;
    }
};

class IPAddressChecked : public IPAddress{
  private:
    string IPAddress;
    string Check = "Correct";
  public:
    IPAddressChecked(string);
    void printChecked(){
      cout << IPaddress << " - " << this -> Check << endl;
    }
    void check(string){
      if(IPaddress > "255.255.255.255" || IPaddress < "0.0.0.0"){
        Check = "Not Correct";
      }else{
        Check = "Correct";
      }
    }
    void print(){
      IPAddress::print();
    }
};

IPAddressChecked::IPAddressChecked(string ip){
  IPAddress::IPaddress = ip;
  check(ip);
}

int main() {
  string IPaddress;
  while(1){
    cin >> IPaddress;
    IPAddressChecked ipCh(IPaddress);
    cout << "Entered ip address: ";
    ipCh.print();
    cout << "Result: ";
    ipCh.printChecked();
  }
}