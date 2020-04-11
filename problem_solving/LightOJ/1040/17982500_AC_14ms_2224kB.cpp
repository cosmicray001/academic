#include <bits/stdc++.h>
#define le 55
using namespace std;
vector<pair<int, int> > v[le];
bool vis[le];
int mst(int a){
  memset(vis, 0, sizeof(vis));
  int sum = 0;
  priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > q;
  q.push(make_pair(0, a));
  while(!q.empty()){
    pair<int, int> p = q.top();
    q.pop();
    int n = p.second;
    if(vis[n]) continue;
    vis[n] = true;
    sum += p.first;
    for(int i = 0; i < v[n].size(); i++){
      int e = v[n][i].second;
      if(!vis[e]) q.push(v[n][i]);
    }
  }
  return sum;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, n, a;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &n);
    int sum = 0;
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        scanf("%d", &a);
        if(a){
          v[i].push_back(make_pair(a, j));
          v[j].push_back(make_pair(a, i));
          sum += a;
        }
      }
    }
    int ans = mst(0);
    bool f = true;
    for(int i = 0; i < n; i++){
      if(!vis[i]){
        f = false;
        break;
      }
    }
    if(f) printf("Case %d: %d\n", ++co, sum - ans);
    else printf("Case %d: -1\n", ++co);
    for(int i = 0; i < le; v[i].clear(), i++);
  }
  return 0;
}
