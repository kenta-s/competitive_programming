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

void dfs(int x, int y){
  field[x][y] = ".";
  for(int dx = -1; dx <= 1; dx++){
    for(int dy = -1; dy <= 1; dy++){
      if(field[dx][dy] == "W") dfs(dx, dy);
    }
  }
}

int main(){
  int count = 0;
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      if(field[i][j] == "W"){
        dfs(i, j);
        count++;
      }
    }
  }
  return 0;
}
