#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll lc(ll a, ll b){
  a = a / __gcd(a, b);
  return a * b;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n, a, b, p, q;
  scanf("%lld %lld %lld %lld %lld", &n, &a, &b, &p, &q);
  ll sum = (n / a) * p + (n / b) * q - min(p, q) * (n / lc(a, b));
  printf("%lld\n", sum);
  return 0;
}
