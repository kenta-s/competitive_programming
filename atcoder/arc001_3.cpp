#include <iostream>
// #include <string>

using namespace std;

char board[8][9];
char originalBoard[8][9];

bool hoge(int i, int j, int direction1, int direction2){
  int a, b;
  a = i+direction1;
  b = j+direction2;
  if(i<0||j<0||i>8||j>8) return true;
  if(board[a][b] == 'Q') return false;
  hoge(a,b,direction1, direction2);
}

bool checkWholeBoard(){
  bool eachRow[8];
  for(int i = 0; i < 8; i++){
    for(int j = 0; j < 8; j++){
      if(board[i][j] == 'Q'){
        if(hoge(i,j,0,1) && hoge(i,j,1,-1) && hoge(i,j,1,0) && hoge(i,j,1,1)){
          eachRow[i] = true;
        }else{
          eachRow[i] = false;
          break;
        }
      }
    }
  }
  return(eachRow[0] && eachRow[1] && eachRow[2] && eachRow[3] && eachRow[4] && eachRow[5] && eachRow[6] && eachRow[7]);
}

bool check(int i, int j){
  return(hoge(i,j,-1,-1) && hoge(i,j,-1,0) && hoge(i,j,-1,1) && hoge(i,j,0,1) && hoge(i,j,1,-1) && hoge(i,j,1,0) && hoge(i,j,1,1));
}

bool done[8][8];
bool dfs(int i, int j){
  done[i][j] = true;
  if(check(i,j)){
    board[i][j] = 'Q';
  }
  if(checkWholeBoard()){
    return true;
  }else{
    for(){
      dfs(i+1,0);
    }
  }
}

void resetBoard(){
  for(int i = 0; i < 8; i++){
    for(int j = 0; j < 8; j++){
      board[i][j] = originalBoard[i][j];
    }
  }
}

int main(){
  bool possible = true;

  for(int i = 0; i < 8; i++){
    cin.getline(originalBoard[i], 9);
  }
  for(int i = 0; i < 8; i++){
    for(int j = 0; j < 8; j++){
      if(board[i][j] == 'Q'){
        if(!hoge(i,j,0,1) || !hoge(i,j,1,-1) || !hoge(i,j,1,0) || !hoge(i,j,1,1)){
          possible = false;
        }
      }
    }
  }

  if(!possible) cout << "No Answer" << endl;

  resetBoard();

  if(checkWholeBoard()){
    cout << "OK" << endl;
  }else{
    cout << "NOK" << endl;
  }

  for(int i = 0; i < 8; i++){
    for(int j = 0; j < 8; j++){
      // cout << board[i][j];
    }
    // cout << endl;
  }
  return 0;
}
