#include <bits/stdc++.h>
#define le 102
using namespace std;
int main(){
  int t, co = 0, a, b, c, n;
  for(scanf("%d", &t); t--; ){
    int ans = 0, ans1 = 0;
    bool l[le], r[le];
    scanf("%d", &n);
    for(int i = 0; i < le; l[i] = 0, r[i] = 0, i++);
    for(int i = 0; i < n; i++){
      scanf("%d %d %d", &a, &b, &c);
      if(l[a] == false && r[b] == false){
        l[a] = true;
        r[b] = true;
        ans += c;
      }
      else{
        r[a] = true;
        l[b] = true;
        ans1 += c;
      }
    }
    printf("Case %d: %d\n", ++co, min(ans, ans1));
  }
  return 0;
}