#include <iostream>

using namespace std;

struct Command{
  int total = 0;
};

Command AA;
Command AB;
Command AX;
Command AY;
Command BA;
Command BB;
Command BX;
Command BY;
Command XA;
Command XB;
Command XX;
Command XY;
Command YA;
Command YB;
Command YX;
Command YY;

void countup(char a, char b){
  if(a == 'A' && b == 'A'){
    cout << "kita" << endl;
    AA.total = AA.total + 1;
  }
}

int main(){
  int N;
  cin >> N;
  char commands[N];

  cin >> commands;

  for(int i = 1; i<=N; i++){
    countup(commands[i-1], commands[i]);
    // cout << commands[i-1] + commands[i];
  }
  cout << AA.total << endl;

  cout << commands << endl;
  return 0;
}
