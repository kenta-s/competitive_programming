# include <iostream>

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

int count = 0;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int distance[10][11];

void move(int x, int y, int prevCount){
  distance[x][y] = prevCount + 1;
  for(int i = 0; i < 4; i++){
    if(maze[x+dx[i]][y+dy[i]] == 'G'){
      std::cout << "count is " << prevCount+1 << std::endl;
    }else if(maze[x+dx[i]][y+dy[i]] == '.'){
      if(distance[x+dx[i]][y+dy[i]] > 0){
      }else{
        move((x+dx[i]), (y+dy[i]), prevCount + 1);
      }
    }
  }
}

int main(){
  int x = 0;
  int y = 0;
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M+1; j++){
      if(maze[i][j] == 'S' && count == 0){
        move(i, j, 0);
      }
    }
  }
  return 0;
}
