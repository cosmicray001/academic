#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
  int t;
  ll a, b, x, y;
  for(scanf("%d", &t); t--; ){
    scanf("%lld %lld", &a, &b);
    x = __gcd(a, b);
    y = (a * b) / x;
    printf("%lld %lld\n", x , y);
  }
  
  return 0;
}