# include <iostream>

const int MAX_N = 100;
const int MAX_W = 10000;

int dp[MAX_N + 1][MAX_W + 1];

int n = 4;
int W = 5;
int v[] = {3,2,4,2};
int w[] = {2,1,3,2};

// expected
// 7

int rec(int i, int j){
  if(dp[i][j] >= 0){
    return dp[i][j];
  }
  int res;
  if(i == n){
    res = 0;
  }else if(j < w[i]){
    res = rec(i + 1, j);
  }else{
    res = std::max(rec(i + 1, j), rec(i + 1, j - w[i]) + v[i]);
  }
  dp[i][j] = res;
  return res;
}

void solve(){
  for(int i = 0; i < n; i++){
    for(int j = 0; j <= W; j++){
      dp[i][j] = -1;
    }
  }
  std::cout << rec(0, W) << std::endl;
}

int main(){
  solve();
  return 0;
}
