#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  ll a;
  while(scanf("%lld", &a) != EOF && a){
    ll sum = 0;
    for(ll i = 1; i < a; i++){
      for(ll j = i + 1; j < a + 1; j++) sum += __gcd(i, j);
    }
    printf("%lld\n", sum);
  }
  return 0;
}
