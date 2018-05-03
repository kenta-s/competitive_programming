#include <iostream>

using namespace std;

struct Command{
  int total = 0;
  int lastIndex;
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

void coutup2(Command* c, int lastIndex){
  if(c->lastIndex != (lastIndex - 1)){
    c->lastIndex = lastIndex;
    c->total = c->total +1;
  };
}

void countup(char a, char b, int i){
  if(a == 'A' && b == 'A'){
    coutup2(&AA, i);
  }else if(a == 'A' && b == 'B'){
    coutup2(&AB, i);
  }else if(a == 'A' && b == 'X'){
    coutup2(&AX, i);
  }else if(a == 'A' && b == 'Y'){
    coutup2(&AY, i);
  }else if(a == 'B' && b == 'A'){
    coutup2(&BA, i);
  }else if(a == 'B' && b == 'B'){
    coutup2(&BB, i);
  }else if(a == 'B' && b == 'X'){
    coutup2(&BX, i);
  }else if(a == 'B' && b == 'Y'){
    coutup2(&BY, i);
  }else if(a == 'X' && b == 'A'){
    coutup2(&XA, i);
  }else if(a == 'X' && b == 'B'){
    coutup2(&XB, i);
  }else if(a == 'X' && b == 'X'){
    coutup2(&XX, i);
  }else if(a == 'X' && b == 'Y'){
    coutup2(&XY, i);
  }else if(a == 'Y' && b == 'A'){
    coutup2(&YA, i);
  }else if(a == 'Y' && b == 'B'){
    coutup2(&YB, i);
  }else if(a == 'Y' && b == 'X'){
    coutup2(&YX, i);
  }else if(a == 'Y' && b == 'Y'){
    coutup2(&YY, i);
  }else{
    cout << "something went wrong" << endl;
  }
}

int main(){
  int N;
  cin >> N;
  char commands[N];

  cin >> commands;

  for(int i = 1; i<N; i++){
    countup(commands[i-1], commands[i], i);
  }
  cout << AA.total << endl;
  cout << BB.total << endl;

  cout << commands << endl;
  return 0;
}
