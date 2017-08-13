# include <iostream>
# include <queue>

// N, M <= 100

int N = 10;
int M = 10;

char maze[10][11] = {
  "#S######.#",
  "......#..#",
  ".#.##.##.#",
  ".#........",
  "##.##.####",
  "....#....#",
  ".#######.#",
  "....#.....",
  ".####.###.",
  "....#...G#",
};

int sx = 0;
int sy = 1;
int gx = 9;
int gy = 8;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int d[10][11];
int INF = 100000000;

typedef std::pair<int, int> P;

void solve(){
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      d[i][j] = INF;
    }
  }

  std::queue<P> que;
  que.push(P(sx, sy));
  d[sx][sy] = 0;
  while(que.size()){
    P p = que.front();
    que.pop();
    if(p.first == gx && p.second == gy) break;
    for(int i = 0; i < 4; i++){
      int nx = p.first + dx[i];
      int ny = p.second + dy[i];
      if(nx >= 0 && nx <= N && ny >= 0 && ny <= M && maze[nx][ny] != '#' && d[nx][ny] == INF){
        que.push(P(nx, ny)); 
        d[nx][ny] = d[p.first][p.second] + 1;
      }
    }
  }
  std::cout << d[gx][gy] << std::endl;
}

int main(){
  solve();
  return 0;
}
