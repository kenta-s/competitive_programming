#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int a,b,c,k;
  int sum = 0;
  vector<int> v = {a, b, c};
  cin >> a >> b >> c >> k;
  for(int i = 0; i < k; i++){
    int m = *max_element(v.begin(), v.end());
    cout << m << endl;
    // sum = a + b + c;
    // m = 333;
  }
  cout << sum << endl;
  return 0;
}
