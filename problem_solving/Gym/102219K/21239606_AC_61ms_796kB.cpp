#include <bits/stdc++.h>
#define le 100005
#define ll long long int
using namespace std;
ll n[le];
int main(){
  //freopen("input.txt", "r", stdin);
  int t, len, co = 0;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &len);
    for(int i = 0; i < len; scanf("%lld", &n[i]), i++);
    sort(n, n + len);
    int ans = 0;
    ll sum = 0;
    for(int i = 0; i < len; i++){
      if(n[i] * 2 - sum >= n[i]){
        ans++;
        sum += n[i];
      }
    }
    printf("Case #%d: %d\n", ++co, ans);
  }
  return 0;
}
