#include <bits/stdc++.h>
#define le 100005
#define ll long long int
using namespace std;
set<ll> st;
ll n[le];
int main(){
  //freopen("input.txt", "r", stdin);
  int len, a, b;
  ll m;
  scanf("%lld %lld", &len, &m);
  for(int i = 0; i < len; scanf("%lld", &n[i]), i++);
  sort(n, n + len);
  for(int i = 0; i < len; i++){
    if(n[i] % m != 0) st.insert(n[i]);
    else{
      if(!st.count(n[i] / m)) st.insert(n[i]);
    }
  }
  printf("%d\n", st.size());
  return 0;
}
