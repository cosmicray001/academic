#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector<ll> v;
ll n[17];
ll x, m, co = 0;
void fnc(int i, int len){
  if(i == len){
    ll maxx = -INT_MAX, minn = INT_MAX, sum = 0;
    for(int i = 0; i < v.size(); i++){
      sum += v[i];
      minn = min(minn, v[i]);
      maxx = max(maxx, v[i]);
    }
    if(sum >= x && abs(maxx - minn) <= m) co++;
    return;
  }
  fnc(i + 1, len);
  v.push_back(n[i]);
  fnc(i + 1, len);
  v.pop_back();
}
int main(){
  int len;



  scanf("%d %lld %lld", &len, &x, &m);
  for(int i = 0; i < len; scanf("%lld", &n[i]), i++);
  fnc(0, len);
  printf("%lld\n", co);
  return 0;
}