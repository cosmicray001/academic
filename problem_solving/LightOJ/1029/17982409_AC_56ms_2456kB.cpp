#include <bits/stdc++.h>
#define le 102
using namespace std;
int p[le];
struct edge{
  int x, y, w;
};
bool comp(edge a, edge b){
  return a.w < b.w;
}
int fnc(int a){
  if(p[a] == a) return a;
  return p[a] = fnc(p[a]);
}
vector<edge> v;
int mst(int n){
  int ans = 0;
  sort(v.begin(), v.end(), comp);
  for(int i = 0; i < v.size(); i++){
    int a = fnc(v[i].x);
    int b = fnc(v[i].y);
    if(a != b){
      p[b] = a;
      ans += v[i].w;
    }
  }
  return ans;
}
int mst1(int n){
  int ans = 0;
  for(int i = v.size() - 1; i >= 0; i--){
    int a = fnc(v[i].x);
    int b = fnc(v[i].y);
    if(a != b){
      p[a] = b;
      ans += v[i].w;
    }
  }
  return ans;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, n, a, b, c, ans;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &n);
    for(int i = 0; i < n + 1; p[i] = i, i++);
    edge eg;
    while(scanf("%d %d %d", &a, &b, &c) != EOF && (a || b || c)){
      eg.x = a;
      eg.y = b;
      eg.w = c;
      v.push_back(eg);
    }
    ans = mst(n);
    for(int i = 0; i < n + 1; p[i] = i, i++);
    ans += mst1(n);
    if(ans % 2 == 0) printf("Case %d: %d\n", ++co, ans / 2);
    else printf("Case %d: %d/2\n", ++co, ans);
    v.clear();
  }
  return 0;
}