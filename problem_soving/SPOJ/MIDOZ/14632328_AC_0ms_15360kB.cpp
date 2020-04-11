#include <bits/stdc++.h>
#define le 102
using namespace std;
int n[le], m[le];
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, len, k;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &len, &k);
    int sum = 0, x;
    for(int i = 0; i < len; i++){
      scanf("%d", &x);
      sum += (x / k);
    }
    printf("%d\n", sum);
  }
  return 0;
}
