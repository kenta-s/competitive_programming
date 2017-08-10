# include <iostream>
# include <vector>

// 1 <= n <= 20
// -10**8 <= a <= 10**8
// -10**8 <= k <= 10**8

int n = 4;
std::vector<int> a{1 ,2 ,4, 7};
int k = 13;

bool dfs(int i, int sum){
  if(i >= n) return k == sum;

  if(dfs(i+1, sum+a[i])) return true;
  if(dfs(i+1, sum)) return true;

  return false;
}

int main(){
  std::cout << "ans is " << dfs(0, 0) << std::endl;
  return 0;
}
