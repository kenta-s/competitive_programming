# include <iostream>

int n = 5;
int s[] = {1, 2, 4, 6, 8};
int t[] = {3, 5, 7, 9, 10};

void solve(){
  int ans = 0;
  int current = 0;
  for(int i = 0; i < n; i++){
    if(current < s[i]){
      current = t[i];
      ans++;
    }
  }
  std::cout << ans << std::endl;
}

int main(){
  solve();
  return 0;
}
