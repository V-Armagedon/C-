#include <iostream>
#include<cstdlib>
#include<ctime>


using namespace std;
int main() {
  int m=3, n=3, dsum=0;
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
  int i=0, j=0;
  while(i<m && j<n){
    dsum+=array[i][j];
    i++;
    j++;
  }
  i=m-1, j=0;
  while(i>=0 && j<n){
  dsum+=array[i][j];
    i--;
    j++;
  }
  
    cout << "У масиві сума діагоналей = " << dsum << endl;
}