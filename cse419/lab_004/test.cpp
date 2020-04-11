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
bool fnc(ll a){
  ll sum = 0, sum1 = 0, temp = a;
  bool f = false;
  for(; temp > 0; temp /= 10) sum += (temp % 10);
  for(int i = 0; i < v.size() && v[i] * v[i] <= a; i++){
    if(a % v[i] == 0){
      while(a % v[i] == 0){
        a /= v[i];
        f = true;
        int tt = v[i];
        for(; tt > 0; tt /= 10) sum1 += (tt % 10);
      }
    }
  }
  if(a != 1){
    if(!f) return false;
    for(; a > 0; a /= 10) sum1 += (a % 10);
  }
  return (sum == sum1);
}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    se();
    int t;
    ll a;
    for(scanf("%d", &t); t--; ){
      scanf("%lld", &a);
      for(ll i = a + 1; ; i++){
        if(fnc(i)){
          printf("%lld\n", i);
          break;
        }
      }
    }
    return 0;
}
