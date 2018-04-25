#include <iostream>

using namespace std;

int main() {
  int x, kyuryo;
  cin >> x;
  int accum = 0;
  for (int i=1; i<=x; ++i) {
    accum += i * 10000;
  }
  cout << accum / x << endl;
  return 0;
}
