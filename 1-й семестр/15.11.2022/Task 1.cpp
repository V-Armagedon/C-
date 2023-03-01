#include <iostream>
#include<cstdlib>
#include<ctime>


using namespace std;
int main() {
  int m=4, n=3;
  int counter[m];
  int array[m][n];

  srand(time(NULL));
  for(int i=0;i<m;i++){
    counter[i] = 0;
  }
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
      if(array[i][j]%2==0){
        counter[i]++;
      }
    }
  }
  for(int i=0;i<m;i++){
    cout << "У " << i+1 << "-му рядку парних елементів = " << counter[i] << endl;
  }
}