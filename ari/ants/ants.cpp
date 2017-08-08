# include <iostream>
# include <list>
# include <vector>

class Ants {
public:
  Ants(){
    L = 0;
    n = 0;
    min = L;
    max = 0;
    x = {};
  };
  ~Ants(){
  }
  void SetN(int num){
    n = num;
  }
  void SetL(int num){
    L = num;
  }
  void SetX(std::vector<int> amount){
    x = amount;
  }
  int CalcMin(){
    for(int i = 0; i < n; i++){
      int tmpMin = std::min(x[i], L - x[i]);
      min = std::max(tmpMin, min);
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
  std::vector<int> x;
};

int main(){
  using namespace std;
  int L = 10;
  int n = 3;
  vector<int> x{2, 6, 7};

  Ants *ants = new Ants;

  ants->SetL(L);
  ants->SetN(n);
  ants->SetX(x);
  cout << "min is " << ants->CalcMin() << endl;
  cout << "max is " << ants->CalcMax() << endl;

  delete ants;

  return 0;
}
