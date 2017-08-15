# include <iostream>

const int MAX_N = 100;
const int MAX_W = 10000;

int n = 3;
int v[] = {4,5,3};
int w[] = {3,4,2};
int W = 7;

int dp[MAX_N+1][MAX_W+1];

// expected
// 10

void solve(){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < W; j++){
      dp[i][j] = 0;
    }
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j <= W; j++){
      if(j < w[i]){
        dp[i+1][j] = dp[i][j];
      }else{
        dp[i+1][j] = std::max(dp[i][j], dp[i + 1][j-w[i]] + v[i]);
      }
    }
  }
  std::cout << dp[n][W] << std::endl;
}

int main(){
  solve();
  return 0;
}
