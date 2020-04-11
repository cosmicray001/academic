#include <bits/stdc++.h>
#define le 102
using namespace std;
vector<pair<int, int> > v[le];
bool vis[le];
int dis[le];
void dijkstra(int a){
  memset(vis, 0, sizeof(vis));
  for(int i = 0; i < le; dis[i] = INT_MAX, i++);
  dis[a] = 0;
  priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > q;
  q.push(make_pair(0, a));
  while(!q.empty()){
    pair<int, int> p = q.top();
    q.pop();
    int no = p.second;
    if(vis[no]) continue;
    vis[no] = true;
    for(int i = 0; i < (int)v[no].size(); i++){
      int e = v[no][i].second, w = v[no][i].first;
      if(dis[e] > dis[no] + w){
        dis[e] = dis[no] + w;
        q.push(make_pair(dis[e], e));
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
    dijkstra(1);
    if(!vis[n]) printf("Case %d: Impossible\n", ++co);
    else printf("Case %d: %d\n", ++co, dis[n]);
    for(int i = 0; i < le; v[i].clear(), i++);
  }
  return 0;
}
