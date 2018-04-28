#include <iostream>
#include <queue>
#include <unordered_map>

using namespace std;

struct Node{
  int a;
  int depth;
};

unordered_map<int, bool> mp;

void hoge(queue<Node> q, int b){
  Node node = q.front();
  q.pop();
  mp[node.a] = true;
  if(node.a == b){
    cout << node.depth << endl;
  }else{
    if(!mp[node.a + 1]){
      Node plus1 = {node.a + 1, node.depth + 1};
      q.push(plus1);
    }
    if(!mp[node.a - 1]){
      Node minus1 = {node.a - 1, node.depth + 1};
      q.push(minus1);
    }
    if(!mp[node.a + 5]){
      Node plus5 = {node.a + 5, node.depth + 1};
      q.push(plus5);
    }
    if(!mp[node.a - 5]){
      Node minus5 = {node.a - 5, node.depth + 1};
      q.push(minus5);
    }
    if(!mp[node.a + 10]){
      Node plus10 = {node.a + 10, node.depth + 1};
      q.push(plus10);
    }
    if(!mp[node.a - 10]){
      Node minus10 = {node.a - 10, node.depth + 1};
      q.push(minus10);
    }
    hoge(q, b);
  }
}

int main(){
  int a, b;
  cin >> a >> b;
  queue<Node> q;
  Node node;
  node = { a, 0 };
  q.push(node);
  hoge(q, b);
  return 0;
}
