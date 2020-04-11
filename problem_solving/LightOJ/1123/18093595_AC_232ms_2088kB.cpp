#include <bits/stdc++.h>
#define le 6003
using namespace std;
int p[202];
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
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, n, m, a, b, c;
  for(scanf("%d", &t); t--; ){
    printf("Case %d:\n", ++co);
    scanf("%d %d", &n, &m);
    edge arr[le];
    int l = 0;
    for(int k = 0; k < m; k++){
      for(int i = 0; i < n + 1; p[i] = i, i++);
      scanf("%d %d %d", &a, &b, &c);
      arr[l].x = a;
      arr[l].y = b;
      arr[l].w = c;
      l++;
      int sum = 0, co = 0, idx = -1;
      sort(arr, arr + l, comp);
      for(int i = 0; i < l; i++){
        a = fnc(arr[i].x);
        b = fnc(arr[i].y);
        if(a != b){
          p[b] = a;
          sum += arr[i].w;
          co++;
        }
        else idx = i;
      }
      if(idx != -1) arr[idx] = arr[--l];
      if(co == n - 1) printf("%d\n", sum);
      else printf("-1\n");
    }
  }
  return 0;
}