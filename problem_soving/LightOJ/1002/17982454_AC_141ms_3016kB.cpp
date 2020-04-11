#include <bits/stdc++.h>
#define le 502
using namespace std;
int cost[le];
bool vis[le];
vector<pair<int, int> > v[le];
void mst(int a){
  memset(vis, 0, sizeof(vis));
  for(int i = 0; i < le; cost[i] = INT_MAX, i++);
  cost[a] = 0;
  priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > q;
  q.push(make_pair(0, a));
  while(!q.empty()){
    pair<int, int> p = q.top();
    q.pop();
    int n = p.second;
    if(vis[n]) continue;
    vis[n] = true;
    for(int i = 0; i < v[n].size(); i++){
      int e = v[n][i].second;
      int w = v[n][i].first;
      if(!vis[e]){
        cost[e] = max(cost[n], min(w, cost[e]));
        q.push(v[n][i]);
      }
    }
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, n, m, a, b, c;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &n, &m);
    for(int i = 0; i < m; i++){
      scanf("%d %d %d", &a, &b, &c);
      v[a].push_back(make_pair(c, b));
      v[b].push_back(make_pair(c, a));
    }
    scanf("%d", &a);
    mst(a);
    printf("Case %d:\n", ++co);
    for(int i = 0; i < n; i++){
      if(!vis[i]) printf("Impossible\n");
      else printf("%d\n", cost[i]);
    }
    for(int i = 0; i < le; v[i].clear(), i++);
  }
  return 0;
}