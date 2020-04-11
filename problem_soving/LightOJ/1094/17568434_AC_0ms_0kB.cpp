#include <bits/stdc++.h>
#define le 30004
using namespace std;
bool vis[le];
int len[le], max_ve = -1, pos;
void bfs(int a, vector<int> v[le], vector<int> cost[le]){
  memset(vis, 0, sizeof(vis));
  memset(len, 0, sizeof(len));
  vis[a] = true;
  len[a] = 0;
  queue<int> q;
  q.push(a);
  while(!q.empty()){
    int p = q.front();
    q.pop();
    if(max_ve < len[p]){
      max_ve = len[p];
      pos = p;
    }
    for(int i = 0; i < v[p].size(); i++){
      int ve = v[p][i];
      if(!vis[ve] && len[ve] < cost[p][i] + len[p]){
        vis[ve] = true;
        len[ve] = cost[p][i] + len[p];
        q.push(ve);
      }
    }
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, x, y, z, n;
  for(scanf("%d", &t); t--; ){
    vector<int> v[le];
    vector<int> cost[le];
    scanf("%d", &n);
    for(int i = 0; i < n - 1; i++){
      scanf("%d %d %d", &x, &y, &z);
      v[x].push_back(y);
      v[y].push_back(x);
      cost[x].push_back(z);
      cost[y].push_back(z);
    }
    max_ve = -1;
    bfs(0, v, cost);
    bfs(pos, v, cost);
    printf("Case %d: %d\n", ++co, max_ve);
  }
  return 0;
}
