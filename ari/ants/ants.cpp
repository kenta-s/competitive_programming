# include <iostream>

class Ants {
public:
  Ants(){
    L = 0;
    n = 0;
    min = L;
    max = 0;
    x[3] = {0, 0, 0};
  };
  int CalcMin(){
    for(int i = 0; i < n; i++){
      min = std::min(min, x[i]);
    }
    return min;
  }
  int CalcMax(){
    for(int i = 0; i < n; i++){
      max = std::max(max, x[i]);
    }
    return max;
  }
private:
  int L;
  int n;
  int min;
  int max;
  int x;
};

int main(){
  int L = 10;
  int n = 3;
  int x[3] = {2, 6, 7};

  int min = L;
  for(int i = 0; i < n; i ++){
    min = std::min(L - x[i], min);
  }
  std::cout << "min is " << min << std::endl;

  int max = 0;
  for(int i = 0; i < n; i ++){
    max = std::max(L - x[i], max);
  }
  std::cout << "max is " << max << std::endl;

  Ants *ants = new Ants();
  std::cout << ants->CalcMin() << std::endl;

  return 0;
}
