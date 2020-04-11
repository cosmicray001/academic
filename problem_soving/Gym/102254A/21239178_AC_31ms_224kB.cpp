#include <bits/stdc++.h>
#define le 2003
using namespace std;
vector<int> v[le];
bool vis[le];
int dis[le];
int bfs(int a, int n){
  for(int i = 0; i < le; vis[i] = false, dis[i] = 0, i++);
  int maxx = -INT_MAX, co = 1;
  dis[a] = 0;
  vis[a] = true;
  queue<int> q;
  q.push(a);
  while(!q.empty()){
    int p = q.front();
    q.pop();
    for(int i = 0; i < v[p].size(); i++){
      int e = v[p][i];
      if(!vis[e]){
        vis[e] = true;
        dis[e] = dis[p] + 1;
        co++;
        maxx = max(maxx, dis[e]);
        q.push(e);
      }
    }
  }
  if(co != n) return -10;
  return maxx;
}
int main(){
  //freopen("input.txt", "r", stdin);
  int n, m, a, b, maxx = -INT_MAX;
  scanf("%d %d", &n, &m);
  for(int i = 0; i < m; scanf("%d %d", &a, &b), v[a].push_back(b), v[b].push_back(a), i++);
  for(int i = 1; i < n + 1 && maxx != -10; maxx = max(maxx, bfs(i, n)), i++);
  if(maxx > 0) printf("=] %d\n", maxx);
  else printf("=[\n");
  return 0;
}
