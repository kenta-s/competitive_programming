#include <iostream>
// #include <string>

using namespace std;

char board[8][9];

bool dfs(int n, int m, int direction1, int direction2){
  int a, b;
  a = n+direction1;
  b = m+direction2;

  if(a < 0 || a > 8 || b < 0 || b > 8) return true;
  if(board[a][b] == 'Q') return false;
  board[a][b] = 'x';
  dfs(a, b, direction1, direction2);

  return true;
}

void putQ(){
  for(int i = 0; i < 8; i++){
    for(int j = 0; j < 8; j++){
      if(board[i][j] == '.'){
        // board[i][j] = 'Q';
        if(dfs(i, j, -1, -1)
           && dfs(i, j, -1, 0)
           && dfs(i, j, -1, 1)
           && dfs(i, j, 0, -1)
           && dfs(i, j, 0, 1)
           && dfs(i, j, 1, -1)
           && dfs(i, j, 1, 0)
           && dfs(i, j, 1, 1)){
        }else{
          cout << "No Answer" << endl;
        }
      }
    }
  }
  
}

int main(){
  for(int i = 0; i < 8; i++){
    cin.getline(board[i], 9);
  }
  for(int i = 0; i < 8; i++){
    for(int j = 0; j < 8; j++){
      if(board[i][j] == 'Q'){
        if(dfs(i, j, -1, -1)
           && dfs(i, j, -1, 0)
           && dfs(i, j, -1, 1)
           && dfs(i, j, 0, -1)
           && dfs(i, j, 0, 1)
           && dfs(i, j, 1, -1)
           && dfs(i, j, 1, 0)
           && dfs(i, j, 1, 1)){
          // putQ();
        }else{
          cout << "No Answer" << endl;
        }
      }
    }
  }

  for(int i = 0; i < 8; i++){
    for(int j = 0; j < 8; j++){
      cout << board[i][j];
    }
    cout << endl;
  }
  return 0;
}
