#include <bits/stdc++.h>
#define ll long long
using namespace std;
int ok(int a){
  a /= 5;
  if(a == 0) return 0;
  return a + ok(a);
}
int fnc(int a){
  int hi = INT_MAX, lo = 5, mid, ans = -1;
  while(lo <= hi){
    mid = (lo + hi) >> 1;
    int x = ok(mid);
    if(x == a){
      ans = mid;
      hi = mid - 1;
    }
    else if(x > a) hi = mid - 1;
    else lo = mid + 1;
  }
  return ans;
}
int main(){
  int t, co = 0, a;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &a);
    int ans = fnc(a);
    if(ans == -1) printf("Case %d: impossible\n", ++co);
    else printf("Case %d: %d\n", ++co, ans);
  }
  return 0;
}
 