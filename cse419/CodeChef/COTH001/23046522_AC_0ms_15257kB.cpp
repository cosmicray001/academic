#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  int t;
  ll a, b;
  for(scanf("%d", &t); t--; ){
    scanf("%lld %lld", &a, &b);
    ll d = (a + b - 1) / a;
    cout << (d * a) - b << endl;
  }
  return 0;
}
