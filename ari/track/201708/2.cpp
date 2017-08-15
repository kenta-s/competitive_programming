# include <iostream>
# include <queue>

// N <= 10000
// L <= 1000000
// P <= 1000000

int N = 4;
int L = 25;
int P = 10;
int A[] = {10, 14, 20, 21};
int B[] = {10, 5, 2, 4};

// expected
// 2

void solve(){
  int ans = 0;
  std::priority_queue<int> que;
  for(int i = 1; i <= L; i++){
    P--;
    if(i==L){
      std::cout << ans << std::endl;
      break;
    }
    for(int j = 0; j < N; j++){
      if(A[j] == i){
        que.push(B[j]);
      }
      if(P==0){
        if(que.size()){
          P += que.top();
          que.pop();
          ans++;
        }else{
          std::cout << -1 << std::endl;
          break;
        }
      }

    }
  }
}

int main(){
  solve();
  return 0;
}
