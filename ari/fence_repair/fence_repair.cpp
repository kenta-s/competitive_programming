# include <iostream>
# include <algorithm>

int N = 3;
int L[] = {8, 5, 8};

// 21
// 13
// 8 
// 0
//
// 5
// 8

// expected
// 34

int hoge(int cost, int rest[]){
  if(rest) return 0;
}

void solve(){
  int sum = 0;
  for(int i = 0; i < N; i++){
    sum += L[i];
  }

  int cost = 0;
  for(int i = 0; i < N; i++){
    sum -= L[i];
    cost += L[i];
    cost += sum - L[i];
    std::cout << cost << std::endl;
  }
  int fuga[] = {};

  std::cout << fuga[1] << std::endl;
  std::cout << cost << std::endl;
}

int main(){
  solve();
  return 0;
}
