# include <iostream>

int N = 6;
char S[] = "ACDBCB";

// Expected output:
// ABCBCD

void solve(){
  int a = 0;
  int b = N - 1;
  while(a <= b){
    bool left = false;
    for(int i = 0; a + i <= b; i++){
      if(S[a + i] < S[b - i]){
        left = true;
        break;
      }else if(S[a + i] > S[b - i]){
        left = false;
        break;
      }
    }
    if(left){
      std::cout << S[a];
      a++;
    }else{
      std::cout << S[b];
      b--;
    }
  }
  std::cout << std::endl;
}

int main(){
  solve();
  return 0;
}
