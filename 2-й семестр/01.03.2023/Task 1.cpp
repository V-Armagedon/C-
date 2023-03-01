#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
  float *array = new float [10];
  int pos=0, neg=0;
  
  srand(time(NULL));
  
  for (int i=0; i<10; i++){
    array[i] = 0.1*(rand()%40-20);
    if(array[i]>0){
      pos++;
    }else if(array[i]<0){
      neg++;
    }
    if(i<9){
    cout << array[i] << ", ";
    }else{
      cout << array[i] << "." << endl;
    }
  }
  cout << "Positive: " << pos << endl << "Negative: " << neg;
  delete [] array;
}