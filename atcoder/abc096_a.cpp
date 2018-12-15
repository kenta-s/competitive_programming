#include <iostream>

using namespace std;

int main(){
  int a,b;
  int count = 0;
  cin >> a >> b;
  for(int i = 1; i <= a; i++){
    for(int j = 1; j <= 31; j++){
      if(i == a && j > b){
        break;
      }
      if(i == j){
        count++;
      }
    }
  }
  cout << count << endl;
  return 0;
}
