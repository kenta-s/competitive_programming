# include <iostream>

int n = 5;
int a[5] = {2, 3, 4, 5, 10};

class Triangle {
public:
  void Power(){
    for(int &x : a){
      x = x * x;
    }
  }
  void Pr(int num){
    std::cout << num << std::endl;
  }
};

int main() {
  // Triangle tri;
  // tri.Power();
  // for(int x : a){
  //   std::cout << x << std::endl;
  // }
  std::cout << std::max(2,std::max(3,7));
  return 0;
}
