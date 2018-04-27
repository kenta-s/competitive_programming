#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <thread>

using namespace std;

// int hoge(queue<int> q, int b, int count){
//   if(q.front() == b){
//     q.pop();
//     return count;
//   }else{
//     int tmp = q.front();
//     q.pop();
//     q.push(tmp + 1);
//     q.push(tmp - 1);
//     q.push(tmp + 5);
//     q.push(tmp - 5);
//     q.push(tmp + 10);
//     q.push(tmp - 10);
//     count = count + 1;
//     hoge(q, b, count);
//   }
// }
// 
// int main(){
//   int a, b, tmp, ans;
//   ans = 0;
//   cin >> a >> b;
//   queue<int> q;
//   q.push(a);
//   cout << hoge(q, b, ans) << endl;
//   return 0;
// }

int hoge(queue<int> q, int b, int* count){
  // *count = *count + 1;
  // cout << q.front() << endl;
  // this_thread::sleep_for(chrono::seconds(1));
  if(q.front() == b){
    q.pop();
    return *count;
  }else{
    int tmp = q.front();
    q.pop();
    q.push(tmp + 1);
    q.push(tmp - 1);
    q.push(tmp + 5);
    q.push(tmp - 5);
    q.push(tmp + 10);
    q.push(tmp - 10);
    return 0;
    // hoge(q, b, count);
  }
}

int main(){
  int a, b, tmp, count;
  count = 0;
  cin >> a >> b;
  queue<int> q;
  q.push(a);
  count = count + 1;
  hoge(q, b, &count);
  // cout << hoge(q, b, &count) << endl;
  cout << count << endl;
  return 0;
}

// int main() {
//   queue<int> q;
//   q.push(1);
//   q.push(2);
//   q.push(3);
//   cout << q.front() << endl;
//   q.pop();
//   q.push(7);
//   q.push(8);
//   q.push(9);
//   cout << q.front() << endl;
//   q.pop();
//   cout << q.front() << endl;
//   q.pop();
//   return 0;
// }
