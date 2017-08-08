# include <iostream>
# include <vector>

// conditions
//
// 1 <= n <= 50
// 1 <= m <= 10**8
// 1 <= k <= 10**8

class Kujibiki {
public:
  Kujibiki(){
    n = 0;
    m = 0;
    k = {};
    drawCount = 4;
  }
  void SetN(const int num){
    n = num;
  }
  int GetN(){
    return n;
  }
  void SetM(const int num){
    m = num;
  }
  int GetM(){
    return m;
  }
  void SetK(const std::vector<int> x){
    k = x;
  }
  void Draw(){
    while(drawCount > 0){
      drawCount --;
    }
  }
  int GetDrawCount(){
    return drawCount;
  }
  ~Kujibiki(){
  }
private:
  int n;
  int m;
  int drawCount;
  std::vector<int> k;
};

int main(){
  int n = 3;
  int m = 10;
  std::vector<int> k{1, 3, 5};

  Kujibiki *kujibiki = new Kujibiki;
  kujibiki->SetN(n);
  kujibiki->SetM(m);
  kujibiki->SetK(k);

  std::cout << "ans is " << kujibiki->GetM() << std::endl;
  std::cout << "count is " << kujibiki->GetDrawCount() << std::endl;

  delete kujibiki;
  return 0;
}
