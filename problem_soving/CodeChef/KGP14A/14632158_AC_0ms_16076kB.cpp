#include <bits/stdc++.h>
#define le 102
using namespace std;
int n[le], m[le];
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, len;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &len);
    for(int i = 0; i < len; scanf("%d", &n[i]), i++);
    for(int i = 0; i < len; scanf("%d", &m[i]), i++);
    sort(n, n + len);
    sort(m, m + len);
    int sum = 0;
    for(int i = 0; i < len; i++){
      sum += abs(n[i] - m[i]);
    }
    printf("Case %d: %d\n", ++co, sum);
  }
  return 0;
}
