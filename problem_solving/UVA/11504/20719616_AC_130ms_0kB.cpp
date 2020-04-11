#include <bits/stdc++.h>
#define le 100005
using namespace std;
vector<int> ans;
vector<int> v[le];
bool vis[le];
void dfs(int a){
  vis[a] = true;
  for(int i = 0; i < v[a].size(); i++){
    if(!vis[v[a][i]]) dfs(v[a][i]);
  }
  ans.push_back(a);
}
void dfs1(int a){
  vis[a] = true;
  for(int i = 0; i < v[a].size(); i++){
    if(!vis[v[a][i]]) dfs1(v[a][i]);
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, n, m, a, b;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &n, &m);
    for(int i = 0; i < m; i++){
      scanf("%d %d", &a, &b);
      v[a].push_back(b);
    }
    memset(vis, false, sizeof(vis));
    for(int i = 1; i < n + 1; i++) if(!vis[i]) dfs(i);
    memset(vis, false, sizeof(vis));
    int c = 0;
    for(int i = ans.size() - 1; i >= 0; i--){
      if(!vis[ans[i]]){
        c++;
        dfs1(ans[i]);
      }
    }
    //printf("Case %d: %d\n", ++co, c);
    printf("%d\n", c);
    for(int i = 0; i < le; v[i].clear(), i++);
    ans.clear();
  }
  return 0;
}
