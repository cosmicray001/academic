#include <bits/stdc++.h>
#define le 102
using namespace std;
int p[le];
int ans;
struct edge{
  int u, v, w;
};
bool comp(edge a, edge b){
  return a.w < b.w;
}
int fnc(int a){
  if(p[a] == a) return a;
  p[a] = fnc(p[a]);
  return p[a];
}
vector<edge> ve;
vector<edge> v;
int mst(int n){
  sort(v.begin(), v.end(), comp);
  int sum = 0, co = 0;
  for(int i = 0; i < (int)v.size(); i++){
    int a = fnc(v[i].u);
    int b = fnc(v[i].v);
    if(a != b){
      p[b] = a;
      sum += v[i].w;
      co++;
      ve.push_back(v[i]);
      if(co == n - 1) break;
    }
  }
  return sum;
}
int mst1(int n){
  int sum = INT_MAX;
  for(int j = 0; j < (int)ve.size(); j++){
    for(int i = 1; i < n + 1; p[i] = i, i++);
    int cost = 0, co = 0;
    for(int i = 0; i < (int)v.size(); i++){
      if(v[i].v == ve[j].v && v[i].u == ve[j].u && v[i].w == ve[j].w) continue;
      int a = fnc(v[i].u);
      int b = fnc(v[i].v);
      if(a != b){
        p[b] = a;
        co++;
        cost += v[i].w;
        if(co == n - 1) break;
      }
    }
    if(co < n - 1) continue;
    sum = min(sum, cost);
  }
  return sum;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, n, m, a, b, c;
  for(scanf("%d", &t); t--; ){
    ve.clear();
    scanf("%d %d", &n, &m);
    for(int i = 1; i < n + 1; p[i] = i, i++);
    edge ve;
    for(int i = 0; i < m; scanf("%d %d %d", &a, &b, &c), ve.u = a, ve.v = b, ve.w = c, v.push_back(ve), i++);
    ans = mst(n);
    printf("%d %d\n", ans, mst1(n));
    v.clear();
  }
  return 0;
}
