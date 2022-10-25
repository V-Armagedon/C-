#include <iostream>

using namespace std;
int main(void) {
  double pi4 = 0.;
  long n;
  long j = 1;
  
  cout << "Number of iterations? ";
  cin >> n;
  
  for(int i=0; i<n; i=i+2){
    pi4 = pi4 + ((1./j)-(1./(j+2)));
    j=j+4;
  }
  
  cout.precision(20);
  cout << "Pi = " << (pi4 * 4.) << endl;
  return 0;
}