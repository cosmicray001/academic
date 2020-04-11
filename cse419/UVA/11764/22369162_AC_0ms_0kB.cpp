#include <bits/stdc++.h>
#define le 55
using namespace std;
int n[le];
int main(){
  int t, co = 0;
  for(scanf("%d", &t); t--; ){
    int len, hi = 0, lo = 0;
    scanf("%d %d", &len, &n[0]);
    for(int i = 1; i < len; i++){
      scanf("%d", &n[i]);
      if(n[i] > n[i - 1]) hi++;
      else if(n[i] < n[i - 1]) lo++;
    }
    printf("Case %d: %d %d\n", ++co, hi, lo);
  }
  return 0;
}
