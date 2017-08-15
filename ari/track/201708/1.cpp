# include <iostream>
# include <queue>

int N = 4;
int L = 25;
int P = 10;
int A[] = {10, 14, 20, 21};
int B[] = {10, 5, 2, 4};

// expected
// 2

void solve(){
  std::priority_queue<int> que;
  int ans = 0;

  for(int i = 1; i <= L; i++){
    P--;
    for(int j = 0; j < N; j++){
      if(A[j] == i){
        que.push(B[j]);
      }
    }
    if(L == i){
      std::cout << ans << std::endl;
      break;
    }else if(P == 0){
      P += que.top();
      ans++;
    }
    if(P == 0){
      std::cout << -1 << std::endl;
      break;
    }
  }
}

int main(){
  solve();
  return 0;
}
