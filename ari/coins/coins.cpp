# include <iostream>

const int VALUES[6] = {1, 5, 10, 50, 100, 500};
const int COINS[6] = {3, 2, 1, 3, 0, 2};

int A = 620;

void solve(){
  int ans = 0;
  for(int i = 5; i >= 0; i--){
    int t = std::min(A/VALUES[i], COINS[i]);
    A -= t * VALUES[i];
    ans += t;
  }
  std::cout << ans << std::endl;
}

int main(){
  solve();
  return 0;
}
