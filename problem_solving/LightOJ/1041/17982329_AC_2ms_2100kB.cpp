#include <bits/stdc++.h>
#define le 52
using namespace std;
int p[le], ans;
bool ck[le];
struct edge{
  int x, y, w;
};
bool comp(edge a, edge b){
  return a.w < b.w;
}
vector<edge> v;
int fnc(int a){
  if(p[a] == a) return a;
  return p[a] = fnc(p[a]);
}
void mst(int n){
  sort(v.begin(), v.end(), comp);
  ans = 0;
  int co = 0;
  for(int i = 0; i < (int)v.size(); i++){
    int a = fnc(v[i].x);
    int b = fnc(v[i].y);
    if(a != b){
      p[b] = a;
      ans += v[i].w;
      co++;
    }
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, c, n;
  string s, s1;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &n);
    map<string, int> mp;
    int l = 1;
    edge eg;
    for(int i = 0; i < n; i++){
      cin >> s >> s1 >> c;
      if(!mp[s]) mp[s] = l++;
      if(!mp[s1]) mp[s1] = l++;
      eg.x = mp[s];
      eg.y = mp[s1];
      eg.w = c;
      v.push_back(eg);
    }
    for(int i = 0; i < le; p[i] = i, i++);
    mst(l - 1);
    c = fnc(1);
    bool f = true;
    for(int i = 2; i < l; i++){
      if(c != fnc(i)){
        f = false;
        break;
      }
    }
    if(f) printf("Case %d: %d\n", ++co, ans);
    else printf("Case %d: Impossible\n", ++co);
    v.clear();
    mp.clear();
  }
  return 0;
}