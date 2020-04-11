#include <bits/stdc++.h>
#define le 200005
using namespace std;
vector<int> v[le];
int dis[le], len[le];
bool vis[le];
vector<int> ck;
void dfs(int a){
  vis[a] = true;
  if(v[a].size() == 1) ck.push_back(a);
  for(int i = 0; i < v[a].size(); i++){
    int e = v[a][i];
    if(!vis[e]){
      dis[e] = dis[a] + 1;
      dfs(e);
    }
  }
}
void dfs1(int a){
  vis[a] = true;
  for(int i = 0; i < v[a].size(); i++){
    int e = v[a][i];
    if(!vis[e]){
      len[e] = len[a] + 1;
      dfs1(e);
    }
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  int n, m, a, b;
  scanf("%d %d", &n, &m);
  for(int i = 0; i < n - 1; i++){
    scanf("%d %d", &a, &b);
    v[a].push_back(b);
    v[b].push_back(a);
  }
  memset(vis, false, sizeof(vis));
  dfs(1);
  memset(vis, false, sizeof(vis));
  dfs1(m);
  int ans = -1;
  for(int i = 0; i < ck.size(); i++) if(dis[ck[i]] > len[ck[i]]) ans = max(ans, dis[ck[i]]);
  printf("%d\n", ans << 1);
  return 0;
}
