#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
  int N=10;
  int max=0;
  int array[N];
  
  srand(time(NULL));
  cout << "Вхідний масив:"<<endl;
  for(int i=0; i<N; i++){
    array[i] = rand()%20-10;
    if (i==N-1){
      cout << array[i]<< endl; 
    }else{
      cout << array[i]<< ", ";    
    }
  }
  for(int i=0; i<N; i++){
    if(array[i]>max){
      max = array[i];
    }
  }
  for(int i=0; i<N; i++){
    if(array[i]==max){
      max = i;
    }
  }
  for(int i=0; i<max; i++){
    if(array[i]<0){
      array[i]=0;
      }
  }
  cout << "Вихідний масив:"<<endl;
  for(int i=0; i<N; i++){
    if (i==N-1){
      cout << array[i]<< endl; 
    }else{
      cout << array[i]<< ", ";    
    }
  }
}