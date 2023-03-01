#include <iostream>
#include <iomanip>

using namespace std;
int main() {
  double N1, N2, N3, N4, N5;
  cin >> N1;
  cin >> N2;
  cin >> N3;
  cin >> N4;
  cin >> N5;

  cout << endl;
  cout << N1 << endl;
  cout << fixed << setprecision(2) << N2 << endl;
  cout << fixed << setprecision(6)<< N3 << endl;
  cout << fixed << setprecision(2) << N4 << endl;
  cout << setprecision(0) << N5 << endl;
}