#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <thread>

using namespace std;

void hoge(queue<int> q, int b){
  int tmp = q.front();
  q.pop();
  int depth = q.front();
  q.pop();
  if(tmp == b){
    cout << depth << endl;
  }else{
    q.push(tmp + 1);
    q.push(depth + 1);
    q.push(tmp - 1);
    q.push(depth + 1);
    q.push(tmp + 5);
    q.push(depth + 1);
    q.push(tmp - 5);
    q.push(depth + 1);
    q.push(tmp + 10);
    q.push(depth + 1);
    q.push(tmp - 10);
    q.push(depth + 1);
    hoge(q, b);
  }
}

int main(){
  int a, b;
  cin >> a >> b;
  queue<int> q;
  q.push(a);
  q.push(0);
  hoge(q, b);
  return 0;
}
