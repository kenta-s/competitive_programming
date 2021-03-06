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
  bool eachRow[8] = {false, false,false,false,false,false,false,false};
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
  return(hoge(i,j,-1,-1) && hoge(i,j,-1,0) && hoge(i,j,-1,1) && hoge(i,j,0,-1) && hoge(i,j,0,1) && hoge(i,j,1,-1) && hoge(i,j,1,0) && hoge(i,j,1,1));
}

void resetRow(int i){
  for(int j=0;j<8;j++){
    board[i][j] = originalBoard[i][j];
  }
}

bool done[8][8];
bool dfs(int i, int j){
  if(i > 8){
    return false;
  }
  done[i][j] = true;
  // if(i == 1 && j == 3){
  //   cout << "hoge" << endl;
  //   cout << check(i, j) << endl;
  // }
  cout << i << endl;
  if(check(i,j)){
    cout << i << j << endl;
    board[i][j] = 'Q';
  }
  if(checkWholeBoard()){
    cout << "yes" << endl;
    return true;
  }else{
    for(int k=0;k<8;k++){
      if(!done[i+1][k]){
        if(dfs(i+1,k)){
          cout << i << j << endl;
        }else{
          board[i][j] = '.';
        }
      }
    };
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

  // for(int i=0;i<8;i++){
  //  for(int j=0;j<8;j++){
  //    if(check(0,j)){
  //      dfs(0,j);
  //    }
  //  }
  // }
  dfs(0,0);

  if(checkWholeBoard()){
    cout << "OK" << endl;
  }else{
    cout << "NOK" << endl;
  }

  for(int i = 0; i < 8; i++){
    for(int j = 0; j < 8; j++){
      cout << board[i][j];
    }
    cout << endl;
  }
  return 0;
}
