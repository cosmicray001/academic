#include <bits/stdc++.h>
#define le 4
using namespace std;
int n[le];
int main(){
  int t, co = 0;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d %d", &n[0], &n[1], &n[2]);
    sort(n, n + 3);
    printf("Case %d: %s\n", ++co, (n[0] * n[0] + n[1] * n[1] == n[2] * n[2]) ? "yes" : "no");
  }
  return 0;
}
