#include <iostream>

using namespace std;
int main() {
  int smax, N=10;
  int array[10] = {5, 8, 9, 2, 3, 6, 0, 4, 1, 7};

  cout << "Вихідний масив:";
  for(int i=0;i<N;i++){
    if(i==N-1){
      cout << array[i] << endl;
    }else{
      cout << array[i] << ", ";
    }
  }
  int max = array[0];
  for(int i=0;i<N;i++){
    if(array[i]>max){
      smax=max;
      max=array[i];
    }
  }
  cout << "Друге за величиною чило у масиві = " << smax;
}