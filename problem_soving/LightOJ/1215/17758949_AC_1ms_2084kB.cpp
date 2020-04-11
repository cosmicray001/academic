#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll gcd(ll a, ll b){
  if(b == 0) return a;
  return gcd(b, a % b);
}
ll lcm(ll a, ll b){
  return (a / gcd(a, b)) * b;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0;
  ll a, b, l, ans, ve, x;
  for(scanf("%d", &t); t--; ){
    scanf("%lld %lld %lld", &a, &b, &l);
    ve = lcm(a, b);
    if(l % ve != 0) printf("Case %d: impossible\n", ++co);
    else{
      ans = l / ve;
      while(true){
        x = gcd(ans, ve);
        if(x == 1){
          printf("Case %d: %lld\n", ++co, ans);
          break;
        }
        ans *= x;
        ve /= x;
      }
    }
  }
  return 0;
}
