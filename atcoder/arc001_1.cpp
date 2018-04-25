#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main(){
  int n;
  map<int, int> result;
  string c;
  cin >> n >> c;
  for(int i=0; i<n; i++){
    result[c[i]] = result[c[i]] + 1;
  }
  int mx, mn;
  mx = max(max(max(result['1'], result['2']), result['3']), result['4']);
  mn = min(min(min(result['1'], result['2']), result['3']), result['4']);
  cout << mx << ' ' << mn << endl;
  return 0;
}
