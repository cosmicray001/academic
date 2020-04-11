#include <bits/stdc++.h>
#define le 30004
using namespace std;
int p[le];
int r[le];
int fnc(int a){
  if(p[a] == a) return a;
  return p[a] = fnc(p[a]);
}
int main(){
  //freopen("input.txt", "r", stdin);
  int n, m, a, b, x;
  while(scanf("%d%d", &n, &m) != EOF && (n || m)){
    for(int i = 0; i < n + 1; p[i] = i, r[i] = 1, i++);
    while(m--){
      scanf("%d", &b);
      scanf("%d", &x);
      for(int i = 0; i < b - 1; i++){
        scanf("%d", &a);
        int temp = a;
        a = fnc(a);
        x = fnc(x);
        if(a != x){
          if(a > x) swap(a, x);
          p[x] = a;
          r[a] += r[x];
        }
        x = temp;
      }
    }
    printf("%d\n", r[fnc(0)]);
  }
  return 0;
}
