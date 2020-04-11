#include <bits/stdc++.h>
#define le 10000006
#define ll long long
using namespace std;
int n[110];
ll n1[le], ve;
int main(){
  int len, len1 = 0, len2 = 0;
  scanf("%d", &len);
  for(int i = 0; i < len; scanf("%d", &n[i]), i++);
  for(int i = 0; i < len; i++){
    for(int j = 0; j < len; j++){
      for(int k = 0; k < len; k++) n1[len1++] = n[i] * n[j] + n[k];
    }
  }
  sort(n1, n1 + len1);
  ll ans = 0;
  for(int i = 0; i < len; i++){
    for(int j = 0; j < len; j++){
      for(int k = 0; k < len; k++){
        if(n[k]){
          ve = (n[i] + n[j]) * n[k];
          ll lo = lower_bound(n1, n1 + len1, ve) - n1;
          ll hi = upper_bound(n1, n1 + len1, ve) - n1;
          ans += (hi - lo);
        }
      }
    }
  }
  printf("%lld\n", ans);
  return 0;
}