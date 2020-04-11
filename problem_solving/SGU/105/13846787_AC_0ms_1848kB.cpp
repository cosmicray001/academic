#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll fnc(ll n){
  if(n % 3 == 0) return n - (n / 3);
  return n - (1 + n / 3);
}
int main(){
  ll a;
  scanf("%lld", &a);
  printf("%lld\n", fnc(a));
  return 0;
}