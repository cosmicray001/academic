#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  ll a, b;
  scanf("%lld %lld", &a, &b);
  ll len = min(a, b), mul = 1;
  for(ll i = 1; i < len + 1; i++) mul *= i;
  printf("%lld\n", mul);
  return 0;
}
