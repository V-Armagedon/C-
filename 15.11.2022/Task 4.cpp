#include <iostream>
#include<cstdlib>
#include<ctime>


using namespace std;
int main() {
  int m=4, n=6;
  int counter[n];
  int array[m][n];

  srand(time(NULL));
  for(int i=0;i<n;i++){
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
        counter[j]+=array[i][j];
    }
  }
  for(int j=0;j<n;j++){
    cout << "У " << j+1 << "-му стовпчику сума елементів = " << counter[j] << endl;
  }
}