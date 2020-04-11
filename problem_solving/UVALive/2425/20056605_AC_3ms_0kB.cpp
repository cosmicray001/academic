#include <bits/stdc++.h>
#define le 102
using namespace std;
vector<pair<int, int> > v[le];
bool vis[le];
int dis[le];
bool dijkstra(int a, int t, int ex){
  for(int i = 0; i < le; vis[i] = false, dis[i] = INT_MAX, i++);
  dis[a] = 0;
  priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > q;
  q.push(make_pair(0, a));
  while(!q.empty()){
    pair<int, int> p = q.top();
    q.pop();
    int no = p.second;
    if(vis[no]) continue;
    vis[no] = true;
    for(int i = 0; i < v[no].size(); i++){
      int e = v[no][i].second, w = v[no][i].first;
      if(dis[e] > dis[no] + w){
        dis[e] = dis[no] + w;
        if(e == ex && dis[ex] <= t) return true;
        q.push(make_pair(dis[e], e));
      }
    }
  }
  if(dis[ex] <= t) return true;
  return 0;
}
int main(){
  //freopen("input.txt", "r", stdin);
  int len, n, e, t, m, a, b, c, co = 0;
  for(scanf("%d", &len); len--; ){
    if(co++) printf("\n");
    scanf("%d %d %d %d", &n, &e, &t, &m);
    for(int i = 0; i < m; i++){
      scanf("%d %d %d", &a, &b, &c);
      v[a].push_back(make_pair(c, b));
    }
    int ans = 0;
    for(int i = 1; i < n + 1; i++){
      if(dijkstra(i, t, e)) ans++;
    }
    printf("%d\n", ans);
    for(int i = 0; i < le; v[i].clear(), i++);
  }
  return 0;
}
