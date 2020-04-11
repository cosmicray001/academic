#include <bits/stdc++.h>
using namespace std;
int bfs(int a, int b, map<int, vector<int> > mp){
  map<int, int> len;
  len[a] = 0;
  queue<int> q;
  q.push(a);
  while(!q.empty()){
    int p = q.front();
    q.pop();
    for(int i = 0; i < mp[p].size(); i++){
      int ve = mp[p][i];
      if(!len.count(ve)){
        len[ve] = len[p] + 1;
        q.push(ve);
      }
    }
  }
  int sum = 0;
  for(map<int, int> :: iterator it = len.begin(); it != len.end(); it++){
    if((*it).second > b) sum++;
  }
  return (sum + mp.size() - len.size());
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int n, a, b, x, y, co = 0;
  while(scanf("%d", &n) != EOF && n){
    map<int, vector<int> > mp;
    while(n--){
      scanf("%d %d", &x, &y);
      mp[x].push_back(y);
      mp[y].push_back(x);
    }
    while(scanf("%d %d", &a, &b) != EOF && (a || b)){
      printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", ++co, bfs(a, b, mp), a, b);
    }
  }
  return 0;
}
