#include <bits/stdc++.h>
#define le 1000006
using namespace std;
int p[le], r[le];
int fnc(int a){
  if(p[a] == a) return a;
  return p[a] = fnc(p[a]);
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int n, m;
  string a, b;
  while(scanf("%d %d", &n, &m) != EOF && (n || m)){
    map<string, int> mp;
    memset(p, 0, sizeof(p));
    memset(r, 0, sizeof(r));
    for(int i = 0; i < n; i++){
      cin >> a;
      mp[a] = i;
      p[i] = i;
      r[i] = 1;
    }
    for(int i = 0; i < m; i++){
      cin >> a >> b;
      int x = fnc(mp[a]), y = fnc(mp[b]);
      if(x != y){
        if(x > y) swap(x, y);
        p[y] = x;
        r[x] += r[y];
      }
    }
    int ans = 0;
    for(int i = 0; i < n; i++) ans = max(ans, r[i]);
    printf("%d\n", ans);
    mp.clear();
  }
  return 0;
}
