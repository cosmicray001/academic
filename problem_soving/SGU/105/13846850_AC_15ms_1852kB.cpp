#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll a;
  scanf("%lld", &a);
  ll ans = a - (a / 3);
  if(a % 3 != 0) ans--;
  printf("%lld\n", ans);
  return 0;
}