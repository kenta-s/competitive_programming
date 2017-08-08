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
    kuji = {};
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
    kuji = x;
  }
  bool Draw(){
    bool ans = false;
    int total = 0;
    
    for(int i = 0; i < 4; i++){
      total = kuji[i];
      if(m == total){
        ans = true;
        break;
      }
      for(int j = 0; j < 4; j++){
        total += kuji[j];
        if(m == total){
          ans = true;
          break;
        }
        for(int k = 0; k < 4; k++){
          total += kuji[k];
          if(m == total){
            ans = true;
            break;
          }
          for(int l = 0; l < 4; l++){
            total += kuji[l];
            if(m == total){
              ans = true;
              break;
            }
          }
        }
      }
    }

    return ans;
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
  std::vector<int> kuji;
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
  std::cout << "count is " << kujibiki->Draw() << std::endl;

  delete kujibiki;
  return 0;
}
