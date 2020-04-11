#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  int t, co = 0;
  ll a;
  for(scanf("%d", &t); t--; ){
    scanf("%lld", &a);
    if(a & 1) printf("Case %d: Impossible\n", ++co);
    else{
      ll m = 1;
      while(a % 2 == 0){
        m *= 2;
        a /= 2;
      }
      printf("Case %d: %lld %lld\n", ++co, a, m);
    }
  }
  return 0;
}
