#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
  string y;
  string m;
  int Y,M,D;
  vector<int> hogelist;
  // int Y,M,D;

  getline(cin, y, '/');
  getline(cin, m, '/');
  cin >> D;
  Y = stoi(y);
  M = stoi(m);

  double result;
  result = 33/2.0;
  cout << Y << endl;
  cout << M << endl;
  cout << D << endl;
  cout << result << endl;
  return 0;
}
