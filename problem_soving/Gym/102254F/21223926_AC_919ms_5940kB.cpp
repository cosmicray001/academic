#include <bits/stdc++.h>
#define le 100005
using namespace std;
int p[le];
map<string, int> mp;
int fnc(int a){
  if(p[a] == a) return a;
  return p[a] = fnc(p[a]);
}
int main(){
  int n, m, a;
  string s, ss;
  scanf("%d%d", &n, &m);
  for(int i = 0; i < n; i++){
    cin >> s;
    p[i] = i;
    mp[s] = i;
  }
  for(int i = 0; i < m; i++){
    cin >> a >> s >> ss;
    int x = fnc(mp[s]), y = fnc(mp[ss]);
    if(a == 1){
      if(x != y){
        if(x > y) swap(x, y);
        p[x] = y;
      }
    }
    else printf("%s\n", (x == y) ? "yes" : "no");
  }
  return 0;
}