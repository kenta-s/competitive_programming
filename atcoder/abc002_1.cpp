#include <iostream>

using namespace std;
int main () {
  int x, y, z;
  cin >> x >> y;
  if(x >= y){
    z = x;
  }else{
    z = y;
  }
  cout << z << endl;
  return 0;
}
