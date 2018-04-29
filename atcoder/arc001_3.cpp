#include <iostream>
// #include <string>

using namespace std;

char board[8][9];

bool dfs(int i, int j){
  return true;
}

int main(){
  for(int i = 0; i < 8; i++){
    cin.getline(board[i], 9);
  }
  for(int i = 0; i < 8; i++){
    for(int j = 0; j < 8; j++){
      if(board[i][j] == 'Q'){
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
