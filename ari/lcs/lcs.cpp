# include <iostream>

const int MAX_N = 1000;
const int MAX_M = 1000;

int n = 4;
int m = 4;
char s[] = "abcd";
char t[] = "becd";

// int n = 7;
// int m = 6;
// char s[] = "ABCBDAB";
// char t[] = "BDCABA";

// expected
// 3

int dp[MAX_N][MAX_M];

void solve(){
  for(int i = 0; i <= n; i++){
    for(int j = 0; j <= m; j++){
      dp[i][j] = 0;
    }
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(s[i] == t[j]){
        dp[i+1][j+1] = dp[i][j] + 1;
      }else{
        dp[i+1][j+1] = std::max(dp[i][j+1], dp[i+1][j]);
      }
    }
  }
  std::cout << dp[n][m] << std::endl;
}

int main(){
  solve();
  return 0;
}
