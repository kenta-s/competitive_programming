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

void move(int x, int y){
  distance[x][y] = 1;
  for(int i = 0; i < 4; i++){
    if(maze[x+dx[i]][y+dy[i]] == 'G'){
      std::cout << "yessssssss!!!!!!!!!" << std::endl;
    }else if(maze[x+dx[i]][y+dy[i]] == '.'){
      if(distance[x+dx[i]][y+dy[i]] == 1){
      }else{
        std::cout << "x is " << x+dx[i] << std::endl;
        std::cout << "y is " << y+dy[i] << std::endl;
        move((x+dx[i]), (y+dy[i]));
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
        move(i, j);
      }
    }
  }
  return 0;
}
