#include <iostream>
using namespace std;
int main(void) {
  int n;
  cout << "Enter the number: ";
  TryAgain:
  cin >> n;
  if (n==0 || n>63){
   cout << "Enter correct number: ";
    goto TryAgain;
  }
  cout << '+';
  for(int i = 0; i < n; i++){
  cout << '-';
  }
  cout << '+' << endl;
  for(int i = 0; i < n;   i++) {
    cout << '|';
    for(int j = 0; j < n; j++){
      cout << ' ';
    }
    cout << '|' << endl;
  }
  cout << '+';
  for(int i = 0; i < n; i++){
    cout << '-';
  }
  cout << '+' << endl;
return 0;
}