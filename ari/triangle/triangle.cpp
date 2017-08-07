# include <iostream>

// int n = 5;
// int a[5] = {2, 3, 4, 5, 10};
int n = 4;
int a[4] = {4,5,10,20};

int main() {
  int ans = 0;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(i==j) continue;
      for(int k = 0; k < n; k++){
        if(i==k || j==k) continue;
        int len = a[i] + a[j] + a[k];
        int ma = std::max(std::max(a[i], a[j]), a[k]);
        int rest = len - ma;
        if(ma < rest) {
          ans = std::max(ans, len);
        }
      }
    }
  }

  std::cout << "answer is " << ans << std::endl;

  return 0;
}
