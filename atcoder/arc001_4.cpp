#include <iostream>

using namespace std;

int main(){
  int N, start, goal;
  cin >> N >> start >> goal;
  int l[N+1], r[N+1];
  for(int i = 0; i >= N; i++){
    cin >> l[i] >> r[i];
  }
  cout << start << endl;
  return 0;
}
