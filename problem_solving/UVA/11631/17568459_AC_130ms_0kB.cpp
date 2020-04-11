#include <bits/stdc++.h>
#define le 200005
using namespace std;
int p[le];
int fnc(int a){
  if(p[a] == a) return a;
  p[a] = fnc(p[a]);
  return p[a];
}
struct edge{
  int u, v, w;
};
bool comp(edge a, edge b){
  return a.w < b.w;
}
vector<edge> v;
int mst(int n){
  sort(v.begin(), v.end(), comp);
  int sum = 0, co = 0;
  for(int i = 0; i < (int)v.size(); i++){
    int a = v[i].u;
    int b = v[i].v;
    a = fnc(a);
    b = fnc(b);
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
  int a, b, x, y, z;
  while(scanf("%d %d", &a, &b) != EOF && a){
    memset(p, 0, sizeof(p));
    for(int i = 0; i < a; p[i] = i, i++);
    edge ve;
    int sum = 0;
    for(int i = 0; i < b; i++){
      scanf("%d %d %d", &x, &y, &z);
      ve.u = x;
      ve.v = y;
      ve.w = z;
      sum += z;
      v.push_back(ve);
    }
    printf("%d\n", sum - mst(a));
    v.clear();
  }
  return 0;
}
