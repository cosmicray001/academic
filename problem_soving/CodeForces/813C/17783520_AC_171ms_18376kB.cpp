#include <bits/stdc++.h>
#define le 200005

using namespace std;

vector<int> v[le];
vector<pair<int, int> > vp;
int dis[le];
bool vis[le];
void dfs(int a){
  vis[a] = true;
  if(v[a].size() == 1) vp.push_back(make_pair(a, dis[a]));
  for(int i = 0; i < v[a].size(); i++){
    int y = v[a][i];
    if(vis[y] == false){
      dis[y] = dis[a] + 1;
      dfs(y);
    }
  }
}
void dfs1(int a){
  vis[a] = true;
  for(int i = 0; i < v[a].size(); i++){
    int y = v[a][i];
    if(vis[y] == false){
      dis[y] = dis[a] + 1;
      dfs1(y);
    }
  }
}
int main(){
  int n, x, a, b;
  scanf("%d %d", &n, &x);
  for(int i = 0; i < n - 1; scanf("%d %d", &a, &b), v[a].push_back(b), v[b].push_back(a), i++);
  dis[x] = 0;
  dfs(x);
  memset(vis, 0, sizeof(vis));
  memset(dis, 0, sizeof(dis));
  dis[1] = 0;
  dfs1(1);
  int sum = 0;
  for(int i = 0; i < vp.size(); i++){
    a = vp[i].first;
    b = vp[i].second;
    if(b < dis[a]) sum = max(sum, dis[a]);
  }
  printf("%d\n", sum * 2);
  return 0;
}
