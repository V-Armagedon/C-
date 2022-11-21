#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main() {
  int m=3, n=4, max=0, index;
  int array[m][n];

  srand(time(NULL));
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      array[i][j]= rand()%10;
    }
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cout << array[i][j];
      if(j==n-1){
        cout << array[i][j] << endl;
      }else{
        cout << array[i][j] << ", ";
      }
    }
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      if(array[i][j]>max){
        max = array[i][j];
        index = i*n+j+1;
      }
    }
  }
    cout << "У масиві максимальний елемент = " << max << " знаходиться за номером: "<< index << endl;
}