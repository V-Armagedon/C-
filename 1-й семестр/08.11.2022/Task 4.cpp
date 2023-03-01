#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main() {
  int A, cbigger=0, N=100;
  int array[N];
  cout << "Вхідне число A: ";
  cin >> A;

  srand(time(NULL));
  for(int i=0;i<N;i++){
    array[i] = rand()%100;
  }
  cout << "Вхідний масив:" << endl;
  for(int i=0;i<N;i++){
    if(i==N-1){
      cout << array[i] << endl;
    }else{
      cout << array[i] << ", ";
    }
  }
  for(int i=0;i<N;i++){
    if(array[i]>A){
      cbigger++;
    }
  }
  cout << "Кількість елементів більших за " << A << " = " << cbigger;
}