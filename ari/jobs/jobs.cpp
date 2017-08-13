# include <iostream>
# include <algorithm>

const int MAX_N = 100000;

int n = 5;
int s[MAX_N] = {1, 2, 4, 6, 8};
int t[MAX_N] = {3, 5, 7, 9, 10};

void solve(){
  std::pair<int, int> itv[MAX_N];
  for(int i = 0; i < n; i++){
    itv[i].first = t[i];
    itv[i].second = s[i];
  }
  std::sort(itv, itv+n);

  int ans = 0;
  int current = 0;

  for(int i = 0; i < n; i++){
    if(current < itv[i].second){
      current = itv[i].first;
      ans++;
    }
  }
  std::cout << ans << std::endl;
}

int main(){
  solve();
  return 0;
}
