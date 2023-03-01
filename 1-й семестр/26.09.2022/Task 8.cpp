#include <iostream>

using namespace std;
int main() {
  int N1, N2;
  cin >> N1;
  cin >> N2;


  if(N1-N2<=0.000001){
    cout << fixed << "Results are equal (by 0.000001 epsilon)" << endl;
  }else{
    cout << fixed << "Results are not equal (by 0.000001 epsilon)" << endl;
  }

}