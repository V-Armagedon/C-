#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
  int N=12;
  int temp;
  int array_BtoS[N];
  int array_StoB[N];
  
  srand(time(NULL));
  cout << "Вхідний масив:"<<endl;
  for(int i=0; i<N; i++){
    array_BtoS[i] = rand()%10;
    if (i==N-1){
      cout << array_BtoS[i]<< endl; 
    }else{
      cout << array_BtoS[i]<< ", ";    
    }
  }
  for(int i=0; i<N; i++){
    array_StoB[i] =array_BtoS[i];
  }
  
  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      if(array_StoB[j]>array_StoB[j+1]){
        temp=array_StoB[j];
        array_StoB[j]=array_StoB[j+1];
        array_StoB[j+1]=temp;
      }
    }
  }
  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      if(array_BtoS[j]<array_BtoS[j+1]){
        temp=array_BtoS[j+1];
        array_BtoS[j+1]=array_BtoS[j];
        array_BtoS[j]=temp;
      }
    }
  }
  
  cout << "Зростаючий масив:"<<endl;
  for(int i=0; i<N; i++){
    if (i==11){
      cout << array_StoB[i]<< endl;
      break;
    }else{
      cout << array_StoB[i]<< ", ";    
    }
  }
  cout << "Спадний масив:"<<endl;
  for(int i=0; i<N; i++){
    if (i==11){
      cout << array_BtoS[i]<< endl;
      break;
    }else{
      cout << array_BtoS[i]<< ", ";    
    }
  }
}