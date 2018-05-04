#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Command{
  char firstC[1];
  char secondC[1];
  int total;
  int lastIndex;
};

Command AA = { 'A', 'A', 0, 0 };
Command AB = { 'A', 'B', 0, 0 };
Command AX = { 'A', 'X', 0, 0 };
Command AY = { 'A', 'Y', 0, 0 };
Command BA = { 'B', 'A', 0, 0 };
Command BB = { 'B', 'B', 0, 0 };
Command BX = { 'B', 'X', 0, 0 };
Command BY = { 'B', 'Y', 0, 0 };
Command XA = { 'X', 'A', 0, 0 };
Command XB = { 'X', 'B', 0, 0 };
Command XX = { 'X', 'X', 0, 0 };
Command XY = { 'X', 'Y', 0, 0 };
Command YA = { 'Y', 'A', 0, 0 };
Command YB = { 'Y', 'B', 0, 0 };
Command YX = { 'Y', 'X', 0, 0 };
Command YY = { 'Y', 'Y', 0, 0 };

void coutup2(Command* c, int lastIndex){
  if(lastIndex == 1 || c->lastIndex != (lastIndex - 1)){
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

Command maxC(Command c1, Command c2){
  if(c1.total >= c2.total){
    return c1;
  }else{
    return c2;
  }
}

Command maxC2(){
  Command m = maxC(AA, AB);
  m = maxC(m, AX);
  m = maxC(m, AY);
  m = maxC(m, BA);
  m = maxC(m, BB);
  m = maxC(m, BX);
  m = maxC(m, BY);
  m = maxC(m, XA);
  m = maxC(m, XB);
  m = maxC(m, XX);
  m = maxC(m, XY);
  m = maxC(m, YA);
  m = maxC(m, YB);
  m = maxC(m, YX);
  m = maxC(m, YY);
  return m;
}

int totalCount = 0;
string replaceWithShortcut(string commands, int N){
  Command m = maxC2();
  totalCount += m.total;
  for(int i = 1; i<N; i++){
    if(commands[i-1] == *m.firstC && commands[i] == *m.secondC){
      commands.erase(i-1, 2);
      i = i -2;
    }
  }
  return commands;
}

int main(){
  int N;
  cin >> N;
  string commands;

  cin >> commands;

  for(int i = 1; i<N; i++){
    countup(commands[i-1], commands[i], i);
  }
  commands = replaceWithShortcut(commands, N);
  commands = replaceWithShortcut(commands, N);
  // cout << totalCount << endl;

  cout << commands << endl;

  // cout << m.name << m.total << endl;

  // cout << XX.total << endl;
  // cout << BB.total << endl;

  // cout << commands << endl;
  return 0;
}
