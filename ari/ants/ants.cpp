# include <iostream>

class Ants {
public:
  Ants();
  int CalcMin(){
    return 0;
  }
  int CalcMax(){
    return 0;
  }
private:
  int L = 0;
  int n = 0;
};

int main(){
  int L = 10;
  int n = 3;
  int x[3] = {2, 6, 7};

  Ants *ants = new Ants(1,3);

  return 0;
}
