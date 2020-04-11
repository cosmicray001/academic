#include <bits/stdc++.h>
#define le 1000006
using namespace std;
int p[le];
struct edge{
  int u, v, w;
};
int fnc(int a){
  if(p[a] == a) return a;
  p[a] = fnc(p[a]);
  return p[a];
}
vector<edge> v;
bool comp(edge a, edge b){
  return a.w < b.w;
}
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
      if(co == n - 1) break;
    }
  }
  return sum;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int n, k, m, x, y, z, co = 0;
  while(scanf("%d", &n) != EOF){
    if(co++) printf("\n");
    for(int i = 1; i < n + 1; p[i] = i, i++);
    int sum = 0;
    for(int i = 0; i < n - 1; scanf("%d %d %d", &x, &y, &z), sum += z, i++);
    printf("%d\n", sum);
    scanf("%d", &k);
    edge ve;
    for(int i = 0; i < k; scanf("%d %d %d", &x, &y, &z), ve.u = x, ve.v = y, ve.w = z, v.push_back(ve), i++);
    scanf("%d", &m);
    for(int i = 0; i < m; scanf("%d %d %d", &x, &y, &z), ve.u = x, ve.v = y, ve.w = z, v.push_back(ve), i++);
    printf("%d\n", mst(n));
    v.clear();
  }
  return 0;
}
