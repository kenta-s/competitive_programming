# include <iostream>
# include <algorithm>

int N = 6;
int R = 10;
int X[] = {1, 7, 15, 20, 30, 50};

// expected
// 3

int first = X[0];

void tick(const int first){
  int ticked = first + R;
}

void solve(){
  std::sort(X, X);
  int count = 1;
  int ticked = X[0] + R;
  for(int i = 0; i < N; i++){
    if(ticked + R < X[i]){
      ticked = ticked + R;
      count++;
    };
  }
  std::cout << count << std::endl;
}

int main(){
  solve();
  return 0;
}
