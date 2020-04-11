#include <bits/stdc++.h>
#define ll long long int
#define le 20004
using namespace std;
ll n[le];
int main(){
  //freopen("input.txt", "r", stdin);
  int len;
  scanf("%d", &len);
  for(int i = 0; i < len * 2; scanf("%lld", &n[i]), i++);
  sort(n, n + (len * 2));
  ll maxx = -INT_MAX, minn = INT_MAX;
  for(int i = 0, j = (len * 2) - 1; i < len; i++, j--){
    ll ve = n[i] + n[j];
    minn = min(minn, ve);
    maxx = max(maxx, ve);
  }
  printf("%lld\n", maxx - minn);
  return 0;
}
