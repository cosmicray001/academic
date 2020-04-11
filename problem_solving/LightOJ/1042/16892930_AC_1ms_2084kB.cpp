#include  <bits/stdc++.h>
#define ll long long
using namespace std;
int fnc(ll a){
  int c = 0;
  for(ll i = 1; i <= a; i = i << 1){
    if(a & i) c++;
  }
  return c;
}
int main(){
  int t, co = 0;
  ll n;
  for(scanf("%d", &t); t--; ){
    scanf("%lld", &n);
    ll sum = 0;
    for(ll i = 1; i <= n; i = i << 1){
      if(n & i){
        sum = n + i;
        break;
      }
    }
    int dif = fnc(n) - fnc(sum);
    for(int i = 0; i < dif; i++) sum += (1 << i);
    printf("Case %d: %lld\n", ++co, sum);
  }
  return 0;
}