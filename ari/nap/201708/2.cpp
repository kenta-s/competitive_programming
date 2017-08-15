# include <iostream>
# include <random>

const int MAX_N = 100;
const int MAX_W = 10000;

// int n = 4;
// int W = 5;
// int v[] = {3,2,4,2};
// int w[] = {2,1,3,2};

// expected
// 7

int dp[MAX_N+1][MAX_W+1];

void solve(){
  std::random_device rd;
  int n = MAX_N;
  int W = MAX_W;
  int v[MAX_N];
  int w[MAX_N];

  for(int i = 0; i < MAX_N; i++){
    v[i] = rd() % 5;
    w[i] = rd() % 5;
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < W; j++){
      dp[i][j] = 0;
    }
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < W+1; j++){
      if(j < w[i]){
        dp[i+1][j] = dp[i][j];
      }else{
        dp[i+1][j] = std::max(dp[i][j], dp[i][j - w[i]] + v[i]);
      }
    }
  }

  std::cout << dp[n][W] << std::endl;
}

int main(){
  solve();
  return 0;
}
