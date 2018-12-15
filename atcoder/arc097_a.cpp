#include <iostream>
#include <string>
#include <vector>

using namespace std;

// WIP
int main(){
  string s;
  int k;
  vector<string> subsets;
  cin >> s >> k;

  for(int i = 0; i < s.size(); i++){
    for(int j = 1; j <= s.size(); j++){
      subsets.push_back(s.substr(i,j));
    }
  }
  cout << subsets[0] << endl;
  return 0;
}
