#include <bits/stdc++.h>
#define le 10004
using namespace std;
bool vis[le], ck[le];
vector<pair<int, int> > v[le];
int mst(int a){
  memset(vis, 0, sizeof(vis));
  priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > q;
  q.push(make_pair(0, a));
  int sum = 0;
  ck[a] = true;
  while(!q.empty()){
    pair<int, int> p = q.top();
    q.pop();
    int xy = p.second;
    if(vis[xy] == true) continue;
    vis[xy] = true;
    sum += p.first;
    for(int i = 0; i < (int)v[xy].size(); i++){
      int y = v[xy][i].second;
      if(vis[y] == false){
        q.push(v[xy][i]);
        ck[y] = true;
      }
    }
  }
  return sum;
}
int main(){
  int n, m, r, a, b, c, t, co = 0;
  for(scanf("%d", &t); t--; ){
    memset(ck, 0, sizeof(ck));
    scanf("%d %d %d", &n, &m, &r);
    for(int i = 0; i < m; i++){
      scanf("%d %d %d", &a, &b, &c);
      if(c < r){
        v[a].push_back(make_pair(c, b));
        v[b].push_back(make_pair(c, a));
      }
    }
    int sum = 0, ans = 0;
    for(int i = 1; i < n + 1; i++){
      if(!ck[i]){
        sum += mst(i);
        sum += r;
        ans++;
      }
    }
    printf("Case #%d: %d %d\n", ++co, sum, ans);
    for(int i = 0; i < le; v[i].clear(), i++);
  }
  return 0;
}