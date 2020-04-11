#include <bits/stdc++.h>
#define le 100005
#define ll long long int
using namespace std;
int n[le >> 6];
vector<int> v;
#define ck(ve) (n[ve >> 6] & (1 << ((ve >> 1) & 31)))
#define st(ve) (n[ve >> 6] |= (1 << ((ve >> 1) & 31)))
void se(){
  int rt = sqrt(le) + 1, k;
  for(int i = 3; i < rt; i += 2) if(!ck(i)) for(int j = i * i, k = i << 1; j < le; j += k) st(j);
  v.push_back(2);
  for(int i = 3; i < le; i += 2) if(!ck(i)) v.push_back(i);
}
int fnc(ll a){
  int ans = 0, len = v.size();
  bool f = false;
  if(a < 0){
    a *= -1;
    f = true;
  }
  for(int i = 0; i < len && v[i] * v[i] <= a; i++){
    if(a % v[i] == 0){
      int x = 0;
      while(a % v[i] == 0){
        x++;
        a /= v[i];
      }
      if(ans == 0) ans = x;
      else ans = __gcd(ans, x);
    }
  }
  if(a > 1) ans = 1;
  if(f) while(ans % 2 == 0) ans /= 2;
  return ans;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  se();
  int t, co = 0;
  ll a;
  for(scanf("%d", &t); t--; ){
    scanf("%lld", &a);
    printf("Case %d: %d\n", ++co, fnc(a));
  }
  return 0;
}
