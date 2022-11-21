#include <iostream>

using namespace std;
int main() {
  int N=5, n1, n2;
  int array[5] = {5, 3, 6, 1, 0};
  
  cout << "Вхідний масив:"<<endl;
  for(int i=0; i<N; i++){
    if (i==N-1){
      cout << array[i] << endl; 
    }else{
      cout << array[i] << ", ";    
    }
  }
  
  int max = array[0];
  for (int i = 0; i < N; i++) {
    if (array[i] > max) {
      max = i;
      n1 = array[i];
    }
  }
  
  int min = array[0];
  for (int i = 0; i < N; i++) {
    if (array[i] < min) {
      min = i;
      n2 = array[i];
    }
  }
  
  array[min] = n1;
  array[max] = n2;
  
  cout << "Вихідний масив:"<<endl;
  for(int i=0; i<N; i++){
    if (i==N-1){
      cout << array[i] << endl; 
    }else{
      cout << array[i] << ", ";    
    }
  }
}