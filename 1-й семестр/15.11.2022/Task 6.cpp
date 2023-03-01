#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main() {
  int m=4, n=7, min=100, index;
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
      if(array[i][j]<min){
        min = array[i][j];
        index = i*n+j+1;
      }
    }
  }
    cout << "У масиві мінімальний елемент = " << min << " знаходиться за номером: "<< index << endl;
}