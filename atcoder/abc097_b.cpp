#include <iostream>

using namespace std;

int main(){
  int x, m=0;
  cin >> x;
  for(int i = 1; i <= x; i++){
    if (i*i <= x) {
      m = i*i;
    }
  }
  cout << m << endl;
  return 0;
}
