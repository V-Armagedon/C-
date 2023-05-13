#include <iostream>
#include <string>

using namespace std;
int main() {
  std::string values;
  getline(cin, values);
  std::string template_1;
  getline(cin, template_1);
  string template_2;
  string word;

  int N = values.size();
  
  for (int i = 0; i < N; i++) {
    if (values[i] == '=') {
      for(int j=i+1; values[j] != ',';j++){
        word += values[j];
      }
    }
  }
  for(int i=0; i<word.size(); i++){
    cout << word[i];
  }
  //cout << N << "\n";
}