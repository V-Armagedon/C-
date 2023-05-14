#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;

class Fraction{
  public:
    Fraction(int numerator, int denominator);
    string toString();
    double toDouble();
void set(int, int);
  private:
    int numerator;
    int denominator;
    double Double;
    string String;
};
// implement Fraction methods
Fraction::Fraction(int numerator, int denominator){
  set(numerator, denominator);
}
string Fraction::toString(){
  setprecision(2);
  int i = 0;
  if(this -> denominator < 0){
    this -> denominator *= (-1);
    this -> numerator *= (-1);
  }
  if(this -> numerator % this -> denominator == 0){
    this -> String = to_string(this -> numerator / this -> denominator);
    return String;
  }
  if(abs(this -> numerator) > this -> denominator){
    for(i = 0; abs(this -> numerator) > this -> denominator; i++){
      if(this -> numerator > 0){
        this -> numerator -= denominator;
      }else if(this -> numerator < 0){
        this -> numerator += denominator;
      }
    }
  }
    if(this -> numerator < 0){
      i *= (-1);
    }
  if(i == 0){
    this -> String = to_string(this -> numerator) + "/" + to_string(this -> denominator);
  }else if(this -> numerator <0){
    this -> numerator = abs(this -> numerator);
  this -> String = to_string(i) + " " + to_string(this -> numerator) + "/" + to_string(this -> denominator);
  }else{
  this -> String = to_string(i) + " " + to_string(this -> numerator) + "/" + to_string(this -> denominator);
  }
  return String;
}
void Fraction::set(int numerator, int denominator){
  this -> numerator = numerator;
  this -> denominator = denominator;
}

int main(void) {
  int num, den, Itemp, i, j;
  string Stemp;
  string input = "";
  Fraction fraction(num, den);
  
  while (true) {
    cout << "Input: ";
    getline(cin, input);
    for (i = input.length() - 1, j = 0, num = 0, den = 0; input[i] != '/'; i--, j++) {
      Stemp = input[i];
      if(Stemp != "-"){
        num = stoi(Stemp);
        den += num * pow(10, j);
      }else{
        den *= (-1);
      }
      }
    for (i--, j = 0, num = 0; i >= 0; i--, j++) {
      Stemp = input[i];
      if(Stemp != "-"){
        Itemp = stoi(Stemp);
        num += Itemp * pow(10, j);
      }else{
        den *= (-1);
      }
    }
    fraction.set(num, den);
    cout << fraction.toString() << " is " 
      //<< fraction.toDouble() 
      << "in decimal" << endl;
  } 
  
  return 0;
}