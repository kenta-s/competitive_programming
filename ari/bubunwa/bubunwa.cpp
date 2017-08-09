# include <iostream>
# include <vector>

// 1 <= n <= 20
// -10**8 <= a <= 10**8
// -10**8 <= k <= 10**8

int main(){

  int n = 4;
  std::vector<int> a{1 ,2 ,4, 7};
  int k = 13;
  
  bool ans = false;
  for(int i = 0; i < n; i++){
    if(a[i] == k){
      ans = true;
      break;
    }else{
      for(int j = 0; j < n; j++){
        if(a[i] + a[j] == k){
          ans = true;
          break;
        }else{
          for(int l = 0; l < n; l++){
            if(a[i] + a[j] + a[l] == k){
              ans = true;
              break;
            }else{
              for(int m = 0; m < n; m++){
                if(a[i] + a[j] + a[l] + a[m] == k) {
                  ans = true;
                  break;
                }
              }
            }
          }
        }
      }
    }
  }

  std::cout << "ans is " << ans << std::endl;
  return 0;
}
