#include <iostream>
#include<ctime>

using namespace std;
int main() {
  int counter=-1, N=100; 
  int array[N];

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
    if(array[i]==0){
      counter = i;
      break;
    }
  }
  if(counter==-1){
    cout << "У даному масиві нульові елементи відсутні";
  }else{
    cout << "Перший нульовий елемент знаходиться на позиції: " << counter+1;
  }
}