#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  ll a;
  scanf("%lld", &a);
  if(a & 1) printf("%lld\n", ((a - 1) >> 1) - a);
  else printf("%lld\n", a >> 1);
  return 0;
}
