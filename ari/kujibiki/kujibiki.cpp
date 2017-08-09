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
  }
  void SetN(const int num){
    n = num;
  }
  void SetM(const int num){
    m = num;
  }
  void SetK(const std::vector<int> x){
    kuji = x;
  }
  bool Draw(){
    bool ans = false;
    std::sort(kuji.begin(), kuji.end());

    std::vector<int> tmp;
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        tmp.push_back(kuji[i] + kuji[j]);
      }
    }
    
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        if(std::binary_search(tmp.begin(), tmp.end(), (m - kuji[i] - kuji[j]))){
          ans = true;
        }
      }
    }

    return ans;
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

  std::cout << "ans is " << kujibiki->Draw() << std::endl;

  delete kujibiki;
  return 0;
}
