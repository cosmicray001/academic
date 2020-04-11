#include <bits/stdc++.h>
#define le 102
using namespace std;
int p[le];
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
vector<edge> v;
int mst(int n){
  sort(v.begin(), v.end(), comp);
  int sum = INT_MAX, co = 0;
  for(int i = (int)v.size() - 1; i >= 0; i--){
    int a = fnc(v[i].u);
    int b = fnc(v[i].v);
    if(a != b){
      p[b] = a;
      co++;
      sum = min(sum, v[i].w);
      if(co == n - 1) break;
    }
  }
  return sum;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, n, m, a, b, c, co = 0;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n + 1; p[i] = i, i++);
    edge eg;
    for(int i = 0; i < m; scanf("%d %d %d", &a, &b, &c), eg.u = a, eg.v = b, eg.w = c, v.push_back(eg), i++);
    printf("Case #%d: %d\n", ++co, mst(n));
    v.clear();
  }
  return 0;
}
