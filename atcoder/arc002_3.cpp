#include <iostream>

using namespace std;

int main(){
  int N;
  cin >> N;
  char commands[N];
  char L[2];
  char R[2];
  cin >> commands;
  cout << commands << endl;
  L[0] = commands[0];
  L[1] = commands[1];
  return 0;
}
