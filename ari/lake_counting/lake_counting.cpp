# include <iostream>

// N, M <= 100

int N = 10;
int M = 12;

char field[10][13] = {
  "W...........",
  ".W.........W",
  "..........WW",
  ".........WWW",
  "..........WW",
  "..........WW",
  "...W........",
  ".WWWW.......",
  "....W.......",
  "............",
};
char fuga[3][2] = {
  "2",
  "2",
  "2"
};

int dfs(int x, int y){
  std::cout << x << std::endl;
  if(x >= 10) return x;

  return 0;
}

int main(){
  char hoge[] = {"1234567890123"};
  std::cout << field << std::endl;
  std::cout << hoge << std::endl;

  for(int i = 0; i < N; i++){
    std::cout << field[i] << std::endl;
  }
  return 0;
}
