#include <bits/stdc++.h>

using namespace std;

int main(){
  int t, co = 0, n, m;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &n, &m);
    int ans = 0;
    for(int i = 2; i <= n; i++) ans = (ans + m) % i;
    printf("Case %d: %d\n", ++co, ans + 1);
  }
  return 0;
}