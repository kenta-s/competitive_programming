#include <iostream>

using namespace std;


struct Command{
  int total = 0;
};

int main(){
  int N;
  cin >> N;
  char commands[N];

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

  cin >> commands;
  cout << commands << endl;
  return 0;
}
