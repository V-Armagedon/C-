#include <iostream>
#include <string.h>
using namespace std;

class Tree{
public:
  void TreeBase(void){
    cout << " /\\ " << endl;
  }
};

class FTree : public Tree{
  public:
    void printFTree(){
      TreeBase();
      cout << "//\\\\" << endl;
    }
};

class STree : public Tree{
  public:
    void printSTree(){
      TreeBase();
      cout << "/**\\" << endl;
    }
};

class ThTree : public Tree{
  public:
    void printThTree(){
      TreeBase();
      cout << "/++\\" << endl;
    }
};

int main() {
  FTree spruce;
  STree Oak;
  ThTree Birch;
  for(int i = 0; i < 3; i++){
    cout << "Drawing " << i+1 << ":" << endl;
    switch(i){
      case 0:{
        spruce.printFTree();
        break;
      }
      case 1:{
        Oak.printSTree();
        break;
      }
      case 2:{
        Birch.printThTree();
        break;
      }
    }
  }
  
  
  
  
  
}