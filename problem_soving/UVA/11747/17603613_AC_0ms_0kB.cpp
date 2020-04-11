#include <bits/stdc++.h>
#define le 10004
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
vector<int> ve;
void mst(){
  sort(v.begin(), v.end(), comp);
  for(int i = 0; i < (int)v.size(); i++){
    int a = fnc(v[i].u);
    int b = fnc(v[i].v);
    if(a != b) p[b] = a;
    else ve.push_back(v[i].w);
  }
}
int main(){
  int n, m, a, b, c;
  while(scanf("%d %d", &n, &m) != EOF && n){
    ve.clear();
    for(int i = 0; i < n; p[i] = i, i++);
    edge eg;
    for(int i = 0; i < m; i++){
      scanf("%d %d %d", &a, &b, &c);
      eg.u = a;
      eg.v = b;
      eg.w = c;
      v.push_back(eg);
    }
    mst();
    if(ve.size() == 0) printf("forest\n");
    else{
      sort(ve.begin(), ve.end());
      for(int i = 0; i < ve.size() - 1; printf("%d ", ve[i]), i++);
      printf("%d\n", ve[ve.size() - 1]);
    }
    v.clear();
  }
  return 0;
}