#include <iostream>
#include<cstdlib>
#include<ctime>


using namespace std;
int main() {
  int m=5, n=7;
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
        counter[i]+=array[i][j];
    }
  }
  for(int i=0;i<m;i++){
    cout << "У " << i+1 << "-му рядку сума елементів = " << counter[i] << endl;
  }
}